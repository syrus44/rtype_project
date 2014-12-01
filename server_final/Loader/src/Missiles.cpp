#include "Missiles.h"

Missiles::Missiles()
{
	this->id = 0;
	this->path = 0;
	this->lp = 0;
	this->serial = '\0';
	this->coord.first = 0;
	this->coord.second = 0;
	this->s = IModule::MISSILE;
}

Missiles::Missiles(const Missiles & other)
{
	this->id = other.getId();
	this->lp = other.getLp();
	this->path = other.getPath();
	this->coord = other.getCoord();
	this->s = other.getSprite();
	this->serial = other.getSerial();
}

Missiles &	Missiles::operator=(const Missiles & other)
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

Missiles::~Missiles()
{
}

void	Missiles::setId(int i)
{
	this->id = i;
}

int		Missiles::getId() const
{
	return (this->id);
}

void	Missiles::setCoord(std::pair<int, int> c)
{
	this->coord = c;
}

const std::pair<int, int> &	Missiles::getCoord() const
{
	return (this->coord);
}

int		Missiles::getPath() const
{
	return (this->path);
}

void	Missiles::setLp(int l)
{
	this->lp = l;
}

int		Missiles::getLp() const
{
	return (this->lp);
}

bool	Missiles::informCollision(IModule *im) const
{
	std::pair<int, int>	this_coord = this->getCoord();
	std::pair<int, int>	oth_coord = im->getCoord();

	if (this_coord.first == oth_coord.first && this_coord.second == oth_coord.second)
	{
		std::cout << "Oups, another object here" << std::endl;
		return true;
	}
	return false;
}

int		Missiles::move(IModule *player)
{
	(void)player;
	this->coord.first += 1;
	if (this->coord.first > 79)
	{
		this->lp = 0;
		return 0;
	}
	return 0;
}

IModule::sprites	Missiles::getSprite() const
{
	return (this->s);
}

char	Missiles::getSerial() const
{
	return (this->serial);
}

void	Missiles::setSerial(const char ser)
{
	this->serial = ser;
}

void	Missiles::setBasicInfo(int p, std::pair<int, int> const & c, const char ser, int i)
{
	this->id = p;
	this->path = i;
	this->coord = c;
	this->serial = ser;
}
