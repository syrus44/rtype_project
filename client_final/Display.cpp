#include	"Display.h"

Display::Display()
{
	this->player1			= loadSprite("Images/players.gif", sf::IntRect(PLAYER_SIZE_X * 0, PLAYER_SIZE_Y * 0, PLAYER_SIZE_X, PLAYER_SIZE_Y));
	this->player2			= loadSprite("Images/players.gif", sf::IntRect(PLAYER_SIZE_X * 0, PLAYER_SIZE_Y * 1, PLAYER_SIZE_X, PLAYER_SIZE_Y));
	this->player3			= loadSprite("Images/players.gif", sf::IntRect(PLAYER_SIZE_X * 0, PLAYER_SIZE_Y * 2, PLAYER_SIZE_X, PLAYER_SIZE_Y));
	this->player4			= loadSprite("Images/players.gif", sf::IntRect(PLAYER_SIZE_X * 0, PLAYER_SIZE_Y * 3, PLAYER_SIZE_X, PLAYER_SIZE_Y));
	this->missilePlayer		= loadSprite("Images/missiles.gif", sf::IntRect(285, 85, MISSILE_PLAYER_SIZE_X, MISSILE_PLAYER_SIZE_Y));
	this->missileMonster		= loadSprite("Images/missiles.gif", sf::IntRect(210, 277, MISSILE_MONSTER_SIZE_X, MISSILE_MONSTER_SIZE_Y));
	this->basicMonster		= loadSprite("Images/basics_monsters.gif", sf::IntRect(49, 102, BASIC_SIZE_X, BASIC_SIZE_Y));
	this->mediumMonster		= loadSprite("Images/medium_monsters.gif", sf::IntRect(0, 20, MEDIUM_MONSTER_SIZE_X, MEDIUM_MONSTER_SIZE_Y));
	this->hardMonster		= loadSprite("Images/hard_monsters.gif", sf::IntRect(0, 67, HARD_MONSTER_SIZE_X, HARD_MONSTER_SIZE_Y));
	this->rock				= loadSprite("Images/rock.gif", sf::IntRect(1, 363, ROCK_SIZE_X, ROCK_SIZE_Y));
	this->ship[PLAYER_1].setTexture(this->player1);
	this->ship[PLAYER_2].setTexture(this->player2);
	this->ship[PLAYER_3].setTexture(this->player3);
	this->ship[PLAYER_4].setTexture(this->player4);
	this->ship[MISSILE_PLAYER].setTexture(this->missilePlayer);
	this->ship[MISSILE_MONSTER].setTexture(this->missileMonster);
	this->ship[BASIC_MONSTER].setTexture(this->basicMonster);
	this->ship[MEDIUM_MONSTER].setTexture(this->mediumMonster);
	this->ship[HARD_MONSTER].setTexture(this->hardMonster);
	this->ship[ROCK].setTexture(this->rock);
	this->backGroundTexture.loadFromFile("Images/background.jpg");
	this->backGround.setTexture(this->backGroundTexture);
	this->i = 1;
}

Display::~Display()
{}

sf::Texture		Display::loadSprite(const std::string &path, const sf::IntRect &rect) const
{
	sf::Texture texture;
	texture.loadFromFile(path, rect);
	return (texture);
}

void			Display::drawGame(sf::RenderWindow *window, const t_mob *mob)
{
	std::map<int, sf::Sprite>::iterator	it;

	window->draw(this->backGround);
	if ((it = this->monsters.find(mob->id)) == this->monsters.end())
	{
		this->ship[mob->path].setPosition((float)(mob->x * 15), (float)(mob->y * 12));
		this->monsters.insert(std::make_pair(mob->id, this->ship[mob->path]));
	}
	else
		it->second.setPosition((float)(mob->x * 15), (float)(mob->y * 12));

	for (it = this->monsters.begin(); it != this->monsters.end(); it++)
	{
		if (it->second.getPosition().x > 15 && it->second.getPosition().x < 1210)
			window->draw(it->second);
	}
}

void			Display::getKey()
{
	this->pressedKey = 0;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		this->pressedKey = LEFT;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		this->pressedKey = RIGHT;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		this->pressedKey = DOWN;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		this->pressedKey = UP;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		this->pressedKey = SHOOT;
}

int			Display::getPressedKey() const
{
	return (this->pressedKey);
}