#pragma once
#ifndef MAP_H_
#define MAP_H_

#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include "IModule.h"
#include "OsFactory.h"

#define MAX_PLAYER 5
#define	COL_SIZE 60
#define SCREEN_SIZE 80

class Map
{
	std::map<int, std::pair<std::string, IModule *>	>						map;	
	std::map<int, std::pair<std::string, IModule *> >::iterator				it;
	std::map<int, std::pair<std::string, IModule *> >::iterator				jt;
	std::map<int, std::pair<std::string, IModule *>	>						monster;
	std::pair<int, int>														p;
	std::stringstream														_serializeData;
	int																		x;
	int																		y;
	int																		id;
	int																		player;
	ISocket																	*s;
	ILoader<IModule>														*l;
public:
	Map();
	Map(Map const &);
	~Map(void);
	Map &																	operator=(Map const &);
	void																	setX(int);
	void																	setY(int);
	void																	setId(int);
	bool																	sendMap(bool, int);
	bool																	sendMonster(int);
	void																	showMap();
	bool																	initSocket();
	void																	popMonster(int);
	bool																	TalkToClient();
	void																	objType(char);
	int																		getX() const;
	int																		getY() const;
	int																		getId() const;
	std::map<int, std::pair<std::string, IModule *>	>const &				getMap() const;
	std::map<int, std::pair<std::string, IModule*> >const &					getMonster() const;
	std::pair<int, int> const &												searchInVector(int);
	bool																	isSpaceFree(std::pair<int, int> const &);
	void																	updateMap(std::string const &);
	void																	convertMap(std::vector<std::string> const &);
	void																	movePlayer(std::pair<int, int> const &, int);
	void																	moveMonster(std::pair<int, int> const &, int);
	void																	setMap(std::map<int, std::pair<std::string, IModule *> >const &);
	void																	setMonster(std::map<int, std::pair<std::string, IModule*> >const &);
};

#endif