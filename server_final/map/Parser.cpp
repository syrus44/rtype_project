#include "Parser.h"

Parser::Parser(std::string const &playerInfo)
{
	this->_mutex = OsFactory::Mutex();
	this->_playerInfo = playerInfo;
	this->_playerLib = "PlayerShip";
}

Parser::~Parser()
{}

int			Parser::getIdPlayer()
{
	return (this->_idPlayer);
}

int			Parser::getKeyPlayer()
{
	return (this->_keyPlayer);
}

void		Parser::serializeToInt()
{
	std::string		nb;

	nb = this->_playerInfo.substr(0, this->_playerInfo.find("\t"));
	std::istringstream	buffId(nb);
	buffId >> this->_idPlayer;
	nb.clear();
	this->_playerInfo.erase(0, this->_playerInfo.find("\t") + 1);
	std::istringstream	buffKey(this->_playerInfo);
	buffKey >> this->_keyPlayer;
}

void		Parser::movePlayer()
{
	this->_mutex->lock();
	switch (this->_keyPlayer)
	{
		case UP:
		{
			this->_pair.second -= 1;
			break;
		}
		case DOWN:
		{
			this->_pair.second += 1;
			break;
		}
		case LEFT:
		{
			this->_pair.first -= 1;
			break;
		}
		case RIGHT:
		{
			this->_pair.first += 1;
			break;
		}
		case SHOOT:
			break;
	default:
		break;
	}
	if (this->_pair.first < SCREEN_SIZE && this->_pair.first > 5 && this->_pair.second < COL_SIZE && this->_pair.second > 0)
		this->_it->second.second->setCoord(this->_pair);
	this->_mutex->unlock();
}

void		Parser::searchPlayer(std::map<int, std::pair<std::string, IModule *> > & map, ILoader<IModule> *l)
{
	if ((this->_it = map.find(this->_idPlayer)) != map.end())
	{
		OsFactory::openLib(this->_playerLib, this->_idPlayer, l);
		this->_pair = this->_it->second.second->getCoord();
		this->movePlayer();
	}
}