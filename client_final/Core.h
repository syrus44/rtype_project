#pragma once

#include <SFML/Graphics.hpp>
#include "Parser.h"

#define		imgIcon				"Images/rtype.png"
#define		windowName			"R-TYPE"
#define		windowSizeX			1210
#define		windowSizeY			767

class					Core
{
private:
	sf::RenderWindow	*window;
	sf::VideoMode		videoMode;
	Parser				*parser;
	bool				isInMenu;
	bool				isIpSet;
	int					id;

public:
	Core(void);
	~Core(void);
	void				launchCore();
	void				createWindow();
	int					setIcon();
	void				connectToServer(sf::String, int);
};