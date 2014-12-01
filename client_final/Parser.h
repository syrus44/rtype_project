#pragma once

#include	<iostream>
#include	<sstream>
#include	<string>

#ifdef WIN32
	#include "WSocket.h"
#else
	#include "USocket.h"
#endif

#define	TIMEOUT 3600

typedef struct s_mob
	{
		int		id;
		int		x;
		int		y;
		int		path;
	}				t_mob;

class Parser
{
	fd_set			read;
	fd_set			write;
	ISocket			*s;
	t_mob			*mob;
	std::string		_rawString;
	std::string		_imgObjectPath; //inutile car dans la struct t_mob
	std::string		_score;
	std::string		_info;
	std::string		_serializeData;
	int				_obj_x;
	int				_obj_y;
	int				_obj_id;
	std::string		_tempstart;
	int				_idPlayer;
	bool			sendMap;

public:
	Parser();
	~Parser();
	t_mob			*getStructMob() const;
	void			serializeToString();
	void			stringToSerialize(const t_mob *);
	void			cleanSerialize();
	std::string		getStr() const;
	std::string		getSerializeData() const;
	void			setStr(const std::string &);
	void			checkType();
	bool			isEmptyPath();
	bool			parseStr();
	int				getIdPlayer();
	int				Init(const std::string &, const int &);
	bool			doConnection(const int &, const int &);
};