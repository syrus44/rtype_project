#ifndef PARSER_H
#define PARSER_H

#include <sstream>
#include <vector>
#include "IModule.h"
#include "OsFactory.h"
#include "IMutex.h"

#define	COL_SIZE 60
#define SCREEN_SIZE 80

class Parser
{
	enum playerKey
	{
		UP = 1,
		DOWN = 2,
		LEFT = 3,
		RIGHT = 4,
		SHOOT = 5
	};
	std::map<int, std::pair<std::string, IModule *>	>::iterator		_it;
	std::string														_playerInfo;
	std::string														_playerLib;
	int																_idPlayer;
	int																_keyPlayer;
	IMutex															*_mutex;
	std::pair<int, int>												_pair;
	int																_inputDelay;

public:
	Parser(std::string const &);
	~Parser();

	void								serializeToInt();
	int									getIdPlayer();
	int									getKeyPlayer();
	void								searchPlayer(std::map<int, std::pair<std::string, IModule *> > &, ILoader<IModule> *);
	void								movePlayer();
};

#endif
