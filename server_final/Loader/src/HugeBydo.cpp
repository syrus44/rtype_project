#include "HugeBydo.h"

HugeBydo::HugeBydo()
{
	this->id = 0;
	this->lp = 0;
	this->coord.first = 0;
	this->coord.second = 0;
	this->path = 0;
	this->serial = '\0';
	this->s = IModule::HARD_MONSTER;
}

HugeBydo::HugeBydo(const HugeBydo & other)
{
	this->id = other.getId();
	this->coord = other.getCoord();
	this->path = other.getPath();
	this->lp = other.getLp();
	this->s = other.getSprite();
	this->serial = other.getSerial();
}

HugeBydo &	HugeBydo::operator=(const HugeBydo & other)
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

HugeBydo::~HugeBydo()
{
}

void	HugeBydo::setId(int i)
{
	this->id = i;
}

int		HugeBydo::getId() const
{
	return (this->id);
}

void	HugeBydo::setCoord(std::pair<int, int> c)
{
	this->coord = c;
}

void	HugeBydo::setLp(int l)
{
	this->lp = l;
}

int		HugeBydo::getLp() const
{
	return (this->lp);
}

int		HugeBydo::getPath() const
{
	return (this->path);
}

const std::pair<int, int> &		HugeBydo::getCoord() const
{
	return (this->coord);
}

bool	HugeBydo::informCollision(IModule *im) const
{
	std::pair<int, int>	this_coord = this->getCoord();
	std::pair<int, int>	oth_coord = im->getCoord();
	
	if (this_coord.first == oth_coord.first && this_coord.second == oth_coord.second)
		return true;
	return false;
}

int		HugeBydo::move(IModule *player)
{
	(void)player;
	int		r = 0;

	this->coord.second += 1;
	this->coord.first -= 1;
	
	#ifdef WIN32
	Sleep(100);
	#else
	sleep(100);
	#endif
	r = rand() % 2;
	if (r == 1)
		return 2;
	else
		this->coord.first -= 1;
	return 0;
}

IModule::sprites	HugeBydo::getSprite() const
{
	return (this->s);
}

void	HugeBydo::setSerial(const char ser)
{
	this->serial = ser;
}

char	HugeBydo::getSerial() const
{
	return (this->serial);
}

void	HugeBydo::setBasicInfo(int p, std::pair<int, int> const & c, const char ser, int i)
{
	this->id = p;
	this->path = i;
	this->coord = c;
	this->serial = ser;
}
