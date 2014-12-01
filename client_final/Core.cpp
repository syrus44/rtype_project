#include "Core.h"
#include "Mainmenu.h"
#include "Display.h"

Core::Core()
{
	this->window = new sf::RenderWindow();
	this->videoMode.width = windowSizeX;
	this->videoMode.height = windowSizeY;
	this->isInMenu = 1;
	this->parser = new Parser;
	this->isIpSet = false;
	this->id = 0;
}

Core::~Core()
{
}

void			Core::launchCore()
{
	Mainmenu	*menu = new Mainmenu();
	Display		*display = new Display();
	t_mob		*mob;

	this->createWindow();
	menu->launchMenu(window);
	while (window->isOpen())
	{
		sf::Event event;
        while (this->window->pollEvent(event))
        {
			if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
			{
				this->isInMenu = 1;
				menu->setInMenu(true);
			}
			if (isInMenu)
				menu->getKey(window, event);
			else
				display->getKey();
        }
		this->window->clear();
		if (this->isInMenu)
			this->isInMenu = menu->drawMenu(window);
		else
		{
			//display->setVolume(menu->getVolume());
			this->connectToServer(menu->getIp(), menu->getPort());
			this->parser->doConnection(this->id, display->getPressedKey());
			mob = this->parser->getStructMob();
			display->drawGame(this->window	,mob);
		}
		this->window->display();	
	}
}

void			Core::createWindow()
{
	this->window->create(videoMode, windowName);
	this->window->setFramerateLimit(60);
	this->setIcon();
}

int				Core::setIcon()
{
	sf::Image	icon;

	if(!icon.loadFromFile(imgIcon))
        return (EXIT_FAILURE);
    this->window->setIcon(256, 256, icon.getPixelsPtr());
	return (EXIT_SUCCESS);
}

void		Core::connectToServer(sf::String ip, int port)
{
	if (this->isIpSet == false)
	{
		this->parser->Init(ip, port);
		this->parser->doConnection(0, 0);
		this->id = this->parser->getIdPlayer();
		this->isIpSet = true;
	}
}