#pragma once

#include			<list>
#include			<fstream>
#include			<sstream>
#include			<iostream>

class							Score
{
private:
	std::list<Score>			lst;
	std::list<Score>::iterator	it;
	std::string					name;
	int							score;
public:
	Score();
	~Score();
	void							getScores();
	void							triScore();
	void							cleanScores();
	void							addMemberLst(std::string const &, int);
	void							addMemberFile(std::string const &, int) const;
	std::list<Score>				getList();
	std::list<Score>::iterator		getIter();
	std::string						getName();
	int								getScore();
};