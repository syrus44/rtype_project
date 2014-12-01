#include "PlayerShip.h"

PlayerShip::PlayerShip()
{
	this->id = 0;
	this->path = 0;
	this->coord.first = 0;
	this->coord.second = 0;
	this->lp = 0;
	this->s = IModule::PLAYER_1;
	this->serial = '\0';
}

PlayerShip::PlayerShip(const PlayerShip & other)
{
	this->id = other.getId();
	this->lp = other.getLp();
	this->path = other.getPath();
	this->coord = other.getCoord();
	this->s = other.getSprite();
	this->serial = other.getSerial();
}

PlayerShip &	PlayerShip::operator=(const PlayerShip & other)
{
	if (&other != this)
	{
		this->id = other.getId();
		this->lp = other.getLp();
		this->path = other.getPath();
		this->coord = other.getCoord();
		this->s = other.getSprite();
		this->serial = other.getSerial();
	}
	return *this;
}

PlayerShip::~PlayerShip()
{
}

void	PlayerShip::setId(int i)
{
	this->id = i;
}

int		PlayerShip::getId() const
{
	return (this->id);
}

void	PlayerShip::setCoord(std::pair<int, int> c)
{
	this->coord = c;
}

const std::pair<int, int> &	PlayerShip::getCoord() const
{
	return (this->coord);
}

int		PlayerShip::getPath() const
{
	return (this->path);
}

void	PlayerShip::setLp(int l)
{
	this->lp = l;
}

int		PlayerShip::getLp() const
{
	return (this->lp);
}

bool	PlayerShip::informCollision(IModule *im) const 
{
	std::pair<int, int>	this_coord = this->getCoord();
	std::pair<int, int>	oth_coord = im->getCoord();

	if (this_coord.first == oth_coord.first && this_coord.second == oth_coord.second)
		return true;
	return false;
}

int		PlayerShip::move(IModule *player)
{
	(void)player;
	return 0;
}

IModule::sprites	PlayerShip::getSprite() const
{
	return (this->s);
}

char	PlayerShip::getSerial() const
{
	return this->serial;
}

void	PlayerShip::setSerial(const char ser)
{
	this->serial = ser;
}

void	PlayerShip::setBasicInfo(int p, std::pair<int, int> const & c, const char ser, int i)
{
	this->path = i;
	this->coord = c;
	this->serial = ser;
	this->id = p;
	switch (p)
	{
		case 1:
			this->s = IModule::PLAYER_1;
			break;
		case 2:
			this->s = IModule::PLAYER_2;
			break;
		case 3:
			this->s = IModule::PLAYER_3;
			break;
		case 4:
			this->s = IModule::PLAYER_4;
		break;
		default: this->s = IModule::UNKNOWN;
	}
}