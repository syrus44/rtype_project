#include <utility>
#include <algorithm>
#include "Map.h"
#include "Rand.h"
#include "IModule.h"
#include "Parser.h"

Map::Map()
  : _serializeData(""), x(0), y(0), id(MAX_PLAYER), player(1), s(0), l(OsFactory::Loader())
{}

Map::Map(Map const &other)
{
	if (&other != this)
	{
		this->monster = other.getMonster();
		this->map = other.getMap();
		this->x = other.getX();
		this->y = other.getY();
		this->id = other.getId();
	}
	this->s = 0;
}

Map &	Map::operator=(Map const & other)
{
	if (&other != this)
	{
		this->monster = other.getMonster();
		this->map = other.getMap();
		this->x = other.getX();
		this->y = other.getY();
		this->id = other.getId();
	}
	return (*this);
}

Map::~Map(void)
{}

bool	Map::initSocket()
{
	this->s = OsFactory::Socket();
	if (this->s->Socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP) == false)
		return (false);
	if (this->s->SocketInfo(0, 10) == false)
		return (false);
	return (true);
}

bool	Map::TalkToClient()
{
	int plX = 0, plY = 0, ret = 0;
	std::string msg("");
	msg = this->s->Receive();

	if (msg.compare("map\n") == 0)
	{
		if (this->player < MAX_PLAYER)
		{
			for (plX = this->player * 10; plX > 1; --plX)	
			{
				for (plY = (COL_SIZE - 10); plY > 1; --plY)	
				{
					if (this->isSpaceFree(std::make_pair(plX, plY)) == true)
					{
						ret = 1;
						break;
					}
				}
				if (ret == 1)
					break;
			} 
			std::string playerlib("PlayerShip");
			OsFactory::openLib(playerlib, this->player, this->l);
			IModule *pl = OsFactory::Module(this->player, this->l);
			pl->setBasicInfo(this->player, std::make_pair(plX, plY), 'P', 0);
			this->_serializeData.str("");
			this->_serializeData << "P\t" << pl->getId() << '\t' << pl->getCoord().first << '\t' << pl->getCoord().second << '\t' << pl->getSprite() << '\t';
			this->map.insert(std::make_pair(this->player, std::make_pair("PlayerShip", pl)));
			this->s->Send(this->_serializeData.str(), (sockaddr *)&(this->s->GetLastUdpClient()));
			this->player++;
		}
		return(true);
	}
	if (!(msg.empty()))
	{
		Parser	  p(msg);
		p.serializeToInt();
		p.searchPlayer(this->map, this->l);
	}

	return (false);
}

void	Map::movePlayer(std::pair<int, int> const &coord, int id)
{
	for (this->it = this->map.begin(); it != this->map.end(); ++this->it)
	{
		OsFactory::openLib(this->it->second.first, this->it->first,  this->l);
		if (this->it->second.second->getId() == id)
		{
			this->it->second.second->setCoord(coord);
			break;
		}
	}
}

void	Map::moveMonster(std::pair<int, int> const &coord, int id)
{
	if ((this->jt = this->monster.find(id)) != this->monster.end())
	{
		OsFactory::openLib(this->jt->second.first, this->jt->first, this->l);
		this->jt->second.second->setCoord(coord);
		for (this->it = this->map.begin(); this->it != this->map.end(); ++this->it)
		{
			OsFactory::openLib(this->it->second.first, this->it->first, this->l);
			if (this->it->second.second->getId() == id)
			{
				this->it->second.second->setCoord(coord);
				break;
			}
		}
	}
}

void	Map::updateMap(std::string const &col)
{
	this->y = (COL_SIZE - 1);
	int i = 0;
	
	for (std::string::const_iterator jt = col.begin(); jt != col.end(); ++jt)
	{
		this->objType((*jt));
		this->y--;
	}
	if (this->map.size() > (COL_SIZE * 2))
	{
		for (this->it = this->map.begin(); it != this->map.end(); ++it)
		{
			if (i < COL_SIZE)
			{
				OsFactory::openLib(this->it->second.first, this->it->first, this->l);
				if (this->it->second.second->getPath() != 'P')
				{
					this->l->closeLibrary(this->it->first);
					this->map.erase(this->it);
				}
			}
			else break;
			++i;
		}
	}
	this->x++;
}

std::pair<int, int> const &	Map::searchInVector(int id)
{
	this->p = std::make_pair(0, 0);
	
	for (this->it = this->map.begin(); it != this->map.end(); ++this->it)
	{
		OsFactory::openLib(this->it->second.first, this->it->first, this->l);
		if (this->it->second.second->getId() == id)
			this->p = std::make_pair(this->it->second.second->getCoord().first, this->it->second.second->getCoord().second);
	}
	return (this->p);
}

bool		Map::isSpaceFree(std::pair<int, int> const & p)
{
	std::pair<int, int> coord;

	for (this->it = this->map.begin(); it != this->map.end(); ++this->it)
	{
		OsFactory::openLib(this->it->second.first, this->it->first, this->l);
		coord = this->it->second.second->getCoord();
		if (coord.first == p.first && coord.second == p.second)
			return (false);
	}

	for (this->jt = this->monster.begin(); jt != this->monster.end(); ++this->jt)
	{
		OsFactory::openLib(this->jt->second.first, this->jt->first, this->l);
		coord = this->jt->second.second->getCoord();
		if (coord.first == p.first && coord.second == p.second)
			return (false);
		return (true);
	}
	return (true);
}

void	Map::setX(int x)
{
	this->x = x;
}

void	Map::setY(int y)
{
	this->y = y;
}

void	Map::setMap(std::map<int, std::pair<std::string, IModule *>	>const &m)
{
	this->map = m;
}

void	Map::setMonster(std::map<int, std::pair<std::string, IModule *> > const &m)
{
	this->monster = m;
}

int		Map::getX() const
{
	return (this->x);
}

int		Map::getY() const
{
	return (this->y);
}

std::map<int, std::pair<std::string, IModule *>	>const &	Map::getMap() const
{
	return (this->map);
}

std::map<int, std::pair<std::string, IModule *> >const &	Map::getMonster() const
{
	return (this->monster);
}

void	Map::convertMap(std::vector<std::string> const &m)
{
	this->x = 0, this->y = (COL_SIZE - 1);
	for (std::vector<std::string>::const_iterator it = m.begin(); it != m.end(); ++it)
	{
		for (std::string::const_iterator jt = it->begin(); jt != it->end(); ++jt)
		{
			this->objType((*jt));
			this->y--;	
		}
		this->y = (COL_SIZE - 1);
		this->x++;
	}
}

void		Map::objType(char obj)
{
	IModule		*e = 0;
	int			curId = 0;
	std::string type;
	bool		isMonster = true;

	if (obj != 'V' && obj != 'P')
	{
		curId = this->id;
		this->id++;
		switch (obj)
		{
			case 'E':
				type.append("BasicBydo");
			break;
			case 'M':
				type.append("MediumBydo");
			break;
			case 'H':
				type.append("HugeBydo");
			break;
			default: isMonster = false;
		}
		OsFactory::openLib(type, curId, this->l);
		e = OsFactory::Module(curId, this->l);
		e->setBasicInfo(curId, std::make_pair(this->x, this->y), obj, 0);
		if (isMonster)		
			this->monster.insert(std::make_pair(curId, std::make_pair(type, e)));
	}
	type.clear();
}

void	Map::popMonster(int id)
{
	if ((this->jt = this->monster.find(id)) != this->monster.end())
	{
		this->l->closeLibrary(this->jt->first);
		this->monster.erase(this->jt);
		for (this->it = this->map.begin(); this->it != this->map.end(); ++this->it)
		{
			if (this->it->second.second->getId() == id)
			{
				this->l->closeLibrary(this->it->first);
				this->map.erase(this->it);
			}
		}
	}
}

void	Map::showMap()
{
	std::cout << "<-- Bottom    			 |		 		Top -->" << std::endl;
	for(this->it = this->map.begin(); this->it != this->map.end(); ++this->it)
		{
			OsFactory::openLib(this->it->second.first, this->it->first, this->l);
			std::cout << this->it->second.second->getSerial();
			if (this->it->second.second->getCoord().second == 0)
				std::cout << std::endl;	
		}
	std::cout << std::endl;
}

bool		Map::sendMap(bool allMap, int scroll)
{
	int tmp = 0;
	if (allMap == true)
		this->it = this->map.begin();
	else 
	{
		for (this->it = this->map.end(); this->it != this->map.begin(); --this->it)
		{
			if (tmp == COL_SIZE)
				break;
			++tmp;
		}
		if (tmp != COL_SIZE)
			this->it = this->map.end();
		tmp = 0;
	}

	for (tmp = this->player; tmp > 0; --tmp)
	{
		if ((this->it = this->map.find(tmp)) != this->map.end())
		{
			this->_serializeData << this->it->second.second->getId() << '\t' << tmp << '\t' << this->it->second.second->getCoord().second << '\t' << this->it->second.second->getSprite() << '\t';
			if (s->Send(this->_serializeData.str(), 0) == false)
				this->player--;	
		}
	}

	while (this->it != this->map.end())
	{
		OsFactory::openLib(this->it->second.first, this->it->first, this->l);
		this->_serializeData.str("");
		if (this->it->second.second->getSerial() != 'P')
			tmp = (this->it->second.second->getCoord().first - scroll);
		else
			tmp = this->it->second.second->getCoord().first;
		this->_serializeData << this->it->second.second->getId() << '\t' << tmp << '\t' << this->it->second.second->getCoord().second << '\t' << this->it->second.second->getSprite() << '\t';
		if (s->Send(this->_serializeData.str(), 0) == false)
		{
			this->player--;
			return (false);
		}
		++this->it;
	}
	return (true);
}

bool	Map::sendMonster(int scroll)
{
	for (this->jt = this->monster.begin(); this->jt != this->monster.end(); ++jt)
	{
		this->_serializeData.str("");
		OsFactory::openLib(this->jt->second.first, this->jt->first, this->l);
		if ((this->jt->second.second->getCoord().first - scroll) > 0)
		{
			this->jt->second.second->move(0);
			this->_serializeData << this->jt->second.second->getId() << '\t' << (this->jt->second.second->getCoord().first - scroll) << '\t' << this->jt->second.second->getCoord().second << '\t' << this->jt->second.second->getSprite() << '\t';
			if (s->Send(this->_serializeData.str(), 0) == false)
				return (false);
		}
	}
	return (true);
}

int			Map::getId() const
{
	return (this->id);
}

void		Map::setId(int id)
{
	this->id = id;
}
