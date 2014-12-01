#include "MediumBydo.h"

MediumBydo::MediumBydo()
{
	this->id = 0;
	this->lp = 0;
	this->path = 0;
	this->coord.first = 0;
	this->coord.second = 0;
	this->s = IModule::MEDIUM_MONSTER;
	this->serial = '\0';
}

MediumBydo::MediumBydo(const MediumBydo & other)
{
	this->id = other.getId();
	this->lp = other.getLp();
	this->path = other.getPath();
	this->coord = other.getCoord();
	this->s = other.getSprite();
	this->serial = other.getSerial();
	this->moy = 0;
}

MediumBydo &	MediumBydo::operator=(const MediumBydo & other)
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

MediumBydo::~MediumBydo()
{
}

void	MediumBydo::setId(int i)
{
	this->id = i;
}

int		MediumBydo::getId() const
{
	return (this->id);
}

void	MediumBydo::setCoord(std::pair<int, int> c)
{
	this->coord = c;
}

const std::pair<int, int> &	MediumBydo::getCoord() const
{
	return (this->coord);
}

int		MediumBydo::getPath() const
{
	return (this->path);
}

void	MediumBydo::setLp(int l)
{
	this->lp = l;
}

int		MediumBydo::getLp() const
{
	return (this->lp);
}

bool	MediumBydo::informCollision(IModule *im) const
{
	std::pair<int, int>	this_coord = this->getCoord();
	std::pair<int, int>	oth_coord = im->getCoord();

	if (this_coord.first == oth_coord.first && this_coord.second == oth_coord.second)
		return true;
	return false;
}

int		MediumBydo::move(IModule *player)
{
	(void)player;
	int		x = this->coord.first;
	int		y = this->coord.second;
		
	if (y > this->moy)
	{
		this->coord.second -= 1;
		this->coord.first -= 1;
	}
	else if (y == this->moy)
	{
		this->coord.second -= 1;
		this->coord.first -= 1;
	}
	else
	{
		this->coord.second += 2;
		this->coord.first -= 1;
	}
	if (this->coord.first < 0)
	{
		this->lp = 0;
		return (true);
	}
	return (false);
}

IModule::sprites	MediumBydo::getSprite() const
{
	return (this->s);
}

void	MediumBydo::setBasicInfo(int p, std::pair<int, int> const & c, const char ser, int i)
{
	this->serial = ser;
	this->id = p;
	this->path = i;
	this->coord = c;
	this->moy = c.first;
}

char	MediumBydo::getSerial() const
{
	return this->serial;
}

void	MediumBydo::setSerial(const char s)
{
	this->serial = s;
}