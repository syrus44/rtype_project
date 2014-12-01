#include "Mainmenu.h"
#include "Score.h"

Mainmenu::Mainmenu(void)
{
	this->currentMenu = INTRO;
	this->currentImg = 0;
	this->currentOpt = 0;
	this->currentSco = 0;
	this->inMenu = 1;
	this->fullscreen = 0;
	this->cleanscores = 0;
	this->volume = 50;
	this->dif = 0;
	this->font.loadFromFile(mainFont);
	this->transparency = 255;
	this->amplitude = 0;
	this->speedBlink = 3;
	this->music.openFromFile(mainsound);
	this->music.setVolume(this->volume);
	this->loadAllTextures();
}

Mainmenu::~Mainmenu(void)
{
}

void	Mainmenu::loadAllTextures()
{
	this->I[INTRO] = this->loadTexture(imgIntro);
	this->M[PLAY] = this->loadTexture(imgMenuPlay);
	this->M[SCORE] = this->loadTexture(imgMenuScore);
	this->M[OPTION] = this->loadTexture(imgMenuOption);
	this->M[EXITMENU] = this->loadTexture(imgMenuExit);
	this->S[SCORESOLO] = this->loadTexture(imgScore);
	this->O[FULLSCREEN] = this->loadTexture(imgOptionFullscreen);
	this->O[REINITSCORES] = this->loadTexture(imgOptionReinit);
	this->O[VOLUME] = this->loadTexture(imgOptionVolume);
	this->O[DIFFICULTY] = this->loadTexture(imgOptionDifficulty);
	this->O[EXITOPT] = this->loadTexture(imgOptionExit);
	this->FN[0] = this->loadTexture(imgGameOver);
}

void							Mainmenu::launchMenu(sf::RenderWindow *window)
{
	(void)window;
	this->sprite.setTexture(this->I[INTRO]);	
	this->music.play();
}

void		Mainmenu::loadIntro(sf::RenderWindow *window)
{
	window->draw(newTextBlink("PRESS ENTER TO CONTINUE", 380, 550, 40));
}

void		Mainmenu::loadScores(sf::RenderWindow *window)
{
	window->draw(newText("Hall Of Fame", 370, 50, 70, 0));			
	this->affScores(window);
	window->draw(newText("Exit", 1050, 650, 50, 1));							
}

void		Mainmenu::loadOptions(sf::RenderWindow *window)
{
	float	x = 50;
	float	y = 500;

	window->draw(newText("Options", 950, 40, 50, 0));	
	if (currentOpt == FULLSCREEN)
		window->draw(newText("FullScreen", x, y, 30, 1));
	else
		window->draw(newText("FullScreen", x, y, 30, 0));
	if (!this->fullscreen)
		window->draw(newText("<   >", x + 200, y, 30, 0));
	else
		window->draw(newText("< X >", x + 200, y, 30, 0));
	if (currentOpt == REINITSCORES)
	{
		window->draw(newText("Init Scores", x, y + 50, 30, 1));
		window->draw(newText("Warning : All Your Scores will be Delete.", x, y + 85, 20, 0));
	}
	else
		window->draw(newText("Init Scores", x, y + 50, 30, 0));
	if (!this->cleanscores)
		window->draw(newText("<   >", x + 200, y + 50, 30, 0));
	else
		window->draw(newText("< X >", x + 200, y + 50, 30, 0));
	if (currentOpt == VOLUME)
		window->draw(newText("Volume", x, y + 100, 30, 1));
	else
		window->draw(newText("Volume", x, y + 100, 30, 0));
	std::ostringstream oss;
    oss << this->volume;
	window->draw(newText("< " + oss.str() + " >", x + 200, y + 100, 30, 0));
	if (currentOpt == DIFFICULTY)
		window->draw(newText("Difficulty", x, y + 150, 30, 1));
	else
		window->draw(newText("Difficulty", x, y + 150, 30, 0));
	switch (dif)
	{
		case (EASY):
			window->draw(newText("< EASY >", 250, y + 150, 30, 0));
		break;
		case (MEDIUM):
			window->draw(newText("< MEDIUM >", 250, y + 150, 30, 0));
		break;
		case (INSANE):
			window->draw(newText("< INSANE >", 250, y + 150, 30, 0));
		break;
	}
	if (currentOpt == EXITOPT)
		window->draw(newText("Exit", x, y + 200, 30, 1));							
	else
		window->draw(newText("Exit", x, y + 200, 30, 0));
}

bool						Mainmenu::drawMenu(sf::RenderWindow *window)
{
		window->draw(sprite);
		switch (currentMenu)
		{
			case (INTRO):
				this->loadIntro(window);
			break;
			case (SCO):
				this->loadScores(window);
			break;
			case (OPT):
				this->loadOptions(window);
			break;
			case (FILLNAME):
			{
				this->name = this->NAME;
				window->draw(newText("Choose your NAME : ", 200, 530, 60, 0));
				window->draw(newTextBlink(this->NAME, 800, 530, 60));
			}
			break;
		}
		if (currentMenu == MENU || currentMenu == CHOOSEIP || currentMenu == CHOOSEPORT || currentMenu == READY)
			window->draw(newText("R-TYPE", 40, 10, 70, 0));							
		if (currentMenu == CHOOSEIP || currentMenu == CHOOSEPORT || currentMenu == READY)
		{
			window->draw(setShape());
			this->ip = this->IP;
			window->draw(newText("Choose your IP : " + this->IP, 380, 530, 30, 0));
			if (this->checkIp() == 0 && this->ip.size() > 0)
				window->draw(newText("Warning : Invalid IP", 380, 562, 20, 0));
		}
		if (currentMenu == CHOOSEPORT || currentMenu == READY)
		{
			std::istringstream buffer(this->PORT);
			buffer >> this->port;		
			window->draw(newText("Choose your PORT : " + this->PORT, 380, 580, 30, 0));
			if (this->checkPort() == 0 && this->port > 0)
				window->draw(newText("Warning : Invalid PORT -> 1024 < PORT < 65536", 380, 612, 20, 0));
		}
		if (currentMenu == READY)
			window->draw(newText("GET READY !!!", 380, 630, 30, 0));
	if (!inMenu)
		return (0);
	return (1);
}

void				Mainmenu::fillIp(sf::Event event)
{
	if (((event.text.unicode >= '0' && event.text.unicode <= '9') || event.text.unicode == '.') &&
		IP.getSize() < 15 && currentMenu == CHOOSEIP)
		IP.insert(IP.getSize(), event.text.unicode);
	if (event.text.unicode == '\b' && IP.getSize() >= 1 && currentMenu == CHOOSEIP)
		IP.erase(IP.getSize() - 1, 1);
	else if (event.text.unicode == '\b' && IP.getSize() == 0 && currentMenu == CHOOSEIP)
		currentMenu = MENU;
}

void				Mainmenu::fillPort(sf::Event event)
{
	if ((event.text.unicode >= '0' && event.text.unicode <= '9') && PORT.getSize() < 5 && currentMenu == CHOOSEPORT)
		PORT.insert(PORT.getSize(), event.text.unicode);
	if (event.text.unicode == '\b' && PORT.getSize() >= 1 && currentMenu == CHOOSEPORT)
		PORT.erase(PORT.getSize() - 1, 1);
	else if (event.text.unicode == '\b' && PORT.getSize() == 0 && currentMenu == CHOOSEPORT)
		currentMenu = CHOOSEIP;
}

void			Mainmenu::getReady(sf::Event event)
{
	if (currentMenu == READY && event.text.unicode == '\b')
		currentMenu = CHOOSEPORT;
	if (IP.getSize() == 15 && this->checkIp() == 1 && event.text.unicode != '\b' && currentMenu != READY)
		currentMenu = CHOOSEPORT;
	if (PORT.getSize() == 5 && this->checkPort() == 1 && event.text.unicode != '\b')
		currentMenu = READY;
}

void			Mainmenu::fillName(sf::Event event)
{
	if (currentMenu == FILLNAME)
	{
		if (((event.text.unicode >= 'a' && event.text.unicode <= 'z') || (event.text.unicode >= 'A' && event.text.unicode <= 'Z')) && NAME.getSize() < 7)
			NAME.insert(NAME.getSize(), event.text.unicode);
		if (event.text.unicode == '\b' && NAME.getSize() != 0)
			NAME.erase(NAME.getSize() - 1, 1);
	}
}

void				Mainmenu::getKeyLeft()
{
	switch (currentMenu)
	{
		case (MENU):
			this->currentImg = SCORE;
		break;
		case (OPT):
		{
			if (this->currentOpt == VOLUME && this->volume > 0)
			{
				this->volume--;
				this->music.setVolume(this->volume);
			}
			if (this->currentOpt == DIFFICULTY && this->dif > EASY)
				this->dif--;
		}
		break;
	}
}

void				Mainmenu::getKeyUp()
{
	switch (currentMenu)
	{
		case (MENU):
			this->currentImg = PLAY;
		break;
		case (OPT):
		{
			if (this->currentOpt == FULLSCREEN)
				this->currentOpt = 4;
			else
				this->currentOpt--;	
		}
		break;
	}
}

void				Mainmenu::getKeyRight()
{
	switch (currentMenu)
	{
		case (MENU):
			this->currentImg = OPTION;
		break;
		case (OPT):
		{
			if (this->currentOpt == VOLUME && this->volume < 100)
			{
				this->volume++;
				this->music.setVolume(this->volume);
			}
			if (this->currentOpt == DIFFICULTY && this->dif < INSANE)
				this->dif++;
		}
		break;
	}
}

void				Mainmenu::getKeyDown()
{
	switch (currentMenu)
	{
		case (MENU):
			this->currentImg = EXITMENU;
		break;
		case (OPT):
		{
			if (this->currentOpt == EXITOPT)
				this->currentOpt = 0;
			else
				this->currentOpt++;
		}
		break;
	}
}

void				Mainmenu::getKeyEnter(sf::RenderWindow *window)
{
	switch (this->currentMenu)
	{
		case (INTRO):
			this->currentMenu = MENU;
		break;
		case (MENU):
		{
			if (this->currentImg == PLAY)
				this->currentMenu = CHOOSEIP;
			if (this->currentImg == SCORE)
				this->currentMenu = SCO;
			if (this->currentImg == OPTION)
				this->currentMenu = OPT;
			if (this->currentImg == EXITMENU)
				window->close();
		}
		break;
		case (CHOOSEIP):
		{
			if (this->IP.getSize() > 0 && this->checkIp() == 1)
				this->currentMenu = CHOOSEPORT;
		}
		break;
		case (CHOOSEPORT):
		{
			if (this->PORT.getSize() > 0 && this->checkPort() == 1)
				currentMenu = READY;
		}
		break;
		case (READY):
		{
			this->inMenu = 0;	
			this->music.stop();
		}
		break;
		case (FILLNAME):
			this->currentMenu = MENU;			
		break;
		case (SCO):
			this->currentMenu = MENU;
		break;
		case (OPT):
		{
			switch (this->currentOpt)
			{
				case (FULLSCREEN):
				{
					if (this->fullscreen)
					{
						this->fullscreen = 0;
						window->create(sf::VideoMode(1210, 767), "R-TYPE");
					}
					else
					{
						sf::View view;
						this->fullscreen = 1;
						window->create(sf::VideoMode(/*1210, 767*/1920, 1080), "R-TYPE", sf::Style::Fullscreen);
						view.reset(sf::FloatRect(0, 0, 1210, 767));
						window->setView(view);
					}
				}
				break;
				case (REINITSCORES):
				{
					this->cleanscores = 1;
					this->initScores();				
				}
				break;
				case (EXITOPT):
					this->currentMenu = MENU;
				break;
			}
		}
		break;
	}
}

void				Mainmenu::setAllTexture()
{
	switch (this->currentMenu)
	{
		case (MENU):
			this->sprite.setTexture(this->M[this->currentImg]);
		break;
		case (SCO):
			this->sprite.setTexture(this->S[this->currentSco]);
		break;
		case (OPT):
			this->sprite.setTexture(this->O[this->currentOpt]);
		break;
		case (FILLNAME):
			this->sprite.setTexture(this->FN[0]);		
		break;
	}
}

void				Mainmenu::getKey(sf::RenderWindow *window, sf::Event event)
{
	if (event.type == sf::Event::KeyPressed)
    {
		switch (event.key.code)
		{
			case (sf::Keyboard::Left):
				this->getKeyLeft();
			break;
			case (sf::Keyboard::Up):
				this->getKeyUp();
			break;
			case (sf::Keyboard::Right):
				this->getKeyRight();
			break;
			case (sf::Keyboard::Down):
				this->getKeyDown();
			break;
			case (sf::Keyboard::Return):
				this->getKeyEnter(window);
			break;
			default: break;
		}
	}
	if (event.type == sf::Event::TextEntered)
	{
		this->fillIp(event);
		this->fillPort(event);
		this->getReady(event);
		this->fillName(event);
	}
	this->setAllTexture();
}

sf::Text		Mainmenu::newText(std::string str, float x, float y, int size, bool b)
{
	sf::Text	t;

	t.setString(str);
	t.setCharacterSize(size);
	t.setFont(font);
	t.setColor(sf::Color(255, 255, 255, 255));
	if (b == true)
		t.setStyle(sf::Text::Underlined);
	t.setPosition(x, y);
	return (t);
}

sf::Text		Mainmenu::newTextBlink(std::string str, float x, float y, int size)
{
	sf::Text	t;

	switch (this->amplitude)
	{
		case (0):
		{
			this->transparency -= this->speedBlink;
			if (this->transparency <= 0)
				this->amplitude = 1;
	}
		break;
		case (1):
		{
			this->transparency += this->speedBlink;
			if (this->transparency >= 255)
				this->amplitude = 0;
		}
		break;
	}
	t.setString(str);
	t.setCharacterSize(size);
	t.setFont(font);
	t.setColor(sf::Color(255, 255, 255, this->transparency));
	t.setPosition(x, y);
	return (t);
}

sf::Texture		Mainmenu::loadTexture(const std::string	&img)
{
	sf::Texture	texture;
	texture.loadFromFile(img);
	return (texture);
}

sf::RectangleShape			Mainmenu::setShape()
{
	sf::RectangleShape		r;
	sf::Vector2f			size;

	size.x = 500;
	size.y = 180;
	r.setSize(size);
	r.setPosition(350, 510);
	r.setOutlineThickness(5);
	r.setOutlineColor(sf::Color(255, 255, 255));
	r.setFillColor(sf::Color(255,255,255, 70));
	return (r);
}

void							Mainmenu::affScores(sf::RenderWindow *window)
{
	Score						*s = new Score();
	std::list<Score>::iterator	it;
	std::list<Score>			ls;
	unsigned int				nb = 0;
	float						x = 435;
	float						y = 350;

	s->getScores();
	ls = s->getList();
	it = ls.begin();
	while (nb != 5 && it != ls.end())
	{
		std::ostringstream	os;
		std::ostringstream	oss;
		std::ostringstream	osss;
		os << nb + 1;
		oss << it->getName();
		osss << it->getScore();
		window->draw(newText(os.str() + " - " + oss.str(), x, y, 50, 0));
		window->draw(newText(osss.str(), x + 250, y, 50, 0));
		y += 50;
		nb++;
		++it;
	}
}

void				Mainmenu::initScores()
{
	std::ofstream	fd(".scores");
	fd.close();
}

bool					Mainmenu::checkIp()
{
	struct sockaddr_in sa;

	if (!inet_pton(AF_INET, this->ip.c_str(), &(sa.sin_addr)))
		return (0);
	else
		return (1);
}

bool				Mainmenu::checkPort()
{
	if (this->port > 1024 && this->port < nbMaxPort && port != 0)
		return (1);
	return (0);
}

std::string			Mainmenu::getIp()
{
	return (this->ip);
}

int					Mainmenu::getPort()
{
	return (this->port);
}

float				Mainmenu::getVolume()
{
	return (this->volume);
}

void				Mainmenu::setCurrentMenu(int c)
{
	this->currentMenu = c;
}

void				Mainmenu::setInMenu(bool b)
{
	this->inMenu = b;
}
