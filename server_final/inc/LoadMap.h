#pragma once
#ifndef LOADMAP_H_
#define LOADMAP_H_

#include <iostream>
#include <fstream>
#include <vector>
#include "Map.h"

class LoadMap
{
	std::vector<std::string>			map;
	std::string							file;
	std::string							line;
	std::string							mapCol;
	std::ifstream						stream;
	int									scroll;
	int									colScroll;
	bool								send;
	IMutex								*mut;
public:
	LoadMap(void);
	LoadMap(std::string const &);
	LoadMap(LoadMap const &);
	LoadMap & operator=(LoadMap const &);
	~LoadMap(void);
	void								setScroll(int);
	void								LoadFile();
	std::string const &					ScrollFile();
	bool								PushMap();
	bool								initLevel();
	void								setMap(std::vector<std::string> const &);
	int									getScroll() const;
	std::string const &					getFile() const;
	std::vector<std::string> const &	getMap() const;
	void								showMap();
	void								lockMap(bool);
	void								setSend(bool);
};

bool	isValid(char);

#endif