#include "MonsterBonus.h"

MonsterBonus::MonsterBonus()
{
	this->id = 0;
	this->path = 0;
	this->coord.first = 0;
	this->coord.second = 0;
	this->lp = 0;
	this->serial = '\0';
	this->s = IModule::MEDIUM_MONSTER;
}

MonsterBonus::MonsterBonus(const MonsterBonus & other)
{
	this->id = other.getId();
	this->lp = other.getLp();
	this->path = other.getPath();
	this->coord = other.getCoord();
	this->s = other.getSprite();
	this->serial = other.getSerial();
}

MonsterBonus &	MonsterBonus::operator=(const MonsterBonus & other)
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

MonsterBonus::~MonsterBonus()
{
}

void	MonsterBonus::setId(int i)
{
	this->id = i;
}

int		MonsterBonus::getId() const
{
	return (this->id);
}

void	MonsterBonus::setCoord(std::pair<int, int> c)
{
	this->coord = c;
}

const std::pair<int, int> &	MonsterBonus::getCoord() const
{
	return (this->coord);
}

int MonsterBonus::getPath() const
{
	return (this->path);
}

int		MonsterBonus::getLp() const
{
	return (this->lp);
}

void	MonsterBonus::setLp(int l)
{
	this->lp = l;
}

int		MonsterBonus::move(IModule *player)
{
	(void)player;
	int r = 0;
	std::cout << this->lp << std::endl;
	if (this->lp == 0)
	{
		std::cout << "Bonus" << std::endl;
		return 3;
	}
	else
	{
		r = rand() % 6;
		std::cout << "Shoot ? " << r << std::endl;
		if (r >= 3)
		{
			std::cout << "Will shoot ..." << std::endl;
			return 2;
		}
		this->coord.first -= 1;
		this->lp -= 1;
		return 1;
	}
	return 0;
}

bool	MonsterBonus::informCollision(IModule *im) const
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

IModule::sprites	MonsterBonus::getSprite() const
{
	return (this->s);
}

void	MonsterBonus::setSerial(const char ser)
{
	this->serial = ser;
}

char	MonsterBonus::getSerial() const
{
	return (this->serial);
}

void	MonsterBonus::setBasicInfo(int p, std::pair<int, int> const & c, const char ser, int i)
{
	this->id = p;
	this->serial = ser;
	this->coord = c;
	this->path = i;
}