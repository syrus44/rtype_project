#include "BasicBydo.h"

BasicBydo::BasicBydo()
{
	this->id = 0;
	this->path = 0;
	this->lp = 0;
	this->coord.first = 0;
	this->coord.second = 0;
	this->s = IModule::BASIC_MONSTER;
	this->serial = '\0';
}

BasicBydo::BasicBydo(const BasicBydo & other)
{
	this->id = other.getId();
	this->lp = other.getLp();
	this->coord = other.getCoord();
	this->path = other.getPath();
	this->s = other.getSprite();
	this->serial = other.getSerial();
}

BasicBydo &	BasicBydo::operator=(const BasicBydo & other)
{
	if (&other != this)
	{
		this->id = other.getId();
		this->coord = other.getCoord();
		this->lp = other.getLp();
		this->path = other.getPath();
		this->s = other.getSprite();
		this->serial = other.getSerial();
	}
	return *this;
}

BasicBydo::~BasicBydo()
{
}

const std::pair<int, int> &		BasicBydo::getCoord() const
{
	return (this->coord);
}

int		BasicBydo::getId() const
{
	return (this->id);
}

int		BasicBydo::getLp() const
{
	return (this->lp);
}

void	BasicBydo::setId(int i)
{
	this->id = i;
}

void	BasicBydo::setCoord(const std::pair<int, int> c)
{
	this->coord = c;
}

int		BasicBydo::getPath() const
{
	return (this->path);
}

bool		BasicBydo::informCollision(IModule *im) const
{
	std::pair<int, int>	this_coord = this->getCoord();
	std::pair<int, int>	oth_coord = im->getCoord();
	
	if (this_coord.first == oth_coord.first && this_coord.second == oth_coord.second)
		return true;
	return false;
}

void	BasicBydo::setLp(int lp)
{
	this->lp = lp;
}

int		BasicBydo::move(IModule *player)
{
	(void)player;
	int r = 0;
		
	if (this->coord.first < 0 || this->getLp() == 0)
	{
		this->lp = 0;
		return 0;
	}
	else
	{
		r = rand() % 11;
		if (r == 5 || r == 10)
			return 2;
		this->coord.first -= 1;
		return 1;
	}
	return 0;
}

IModule::sprites	BasicBydo::getSprite() const
{
	return (this->s);
}

void	BasicBydo::setSerial(const char ser)
{
	this->serial = ser;
}

char	BasicBydo::getSerial() const
{
	return (this->serial);
}

void	BasicBydo::setBasicInfo(int p, std::pair<int, int> const & c, const char ser, int i)
{
	this->id = p;
	this->serial = ser;
	this->coord = c;
	this->path = i;
}