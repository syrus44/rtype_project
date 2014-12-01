#pragma once

#ifdef WIN32
	#include <winsock2.h>
	#include <ws2tcpip.h>
	#pragma comment(lib, "ws2_32.lib")
#else
	#include <sys/socket.h>
	#include <arpa/inet.h>
#endif

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
	
#define		imgIntro			"Images/Intro.jpg"
#define		imgMenuPlay			"Images/menuPlay.jpg"
#define		imgMenuOption		"Images/menuOption.jpg"
#define		imgMenuScore		"Images/menuScore.jpg"
#define		imgMenuExit			"Images/menuExit.jpg"
#define		imgOptionFullscreen	"Images/fullscreen.jpg"
#define		imgOptionReinit		"Images/reinitscores.jpg"
#define		imgOptionVolume		"Images/volume.jpg"
#define		imgOptionDifficulty "Images/difficulty.jpg"
#define		imgOptionExit		"Images/exit.jpg"
#define		imgScore			"Images/score.jpg"
#define		imgGameOver			"Images/gameOver.jpg"
#define		mainFont			"Fonts/Transformers.ttf"
#define		mainsound			"Sounds/wil8bit.ogg"
#define		nbMaxPort			65536

enum		e_currentMenu
{
	INTRO,
	MENU,
	SCO,
	OPT,
	CHOOSEIP,
	CHOOSEPORT,	
	READY,
	FILLNAME
};

enum		e_menu
{
	PLAY,
	SCORE,
	OPTION,
	EXITMENU
};

enum		e_scores
{
	SCORESOLO
};

enum		e_options
{
	FULLSCREEN,
	REINITSCORES,
	VOLUME,
	DIFFICULTY,
	EXITOPT
};

enum		DIFFICULTY
{
	EASY,
	MEDIUM,
	INSANE
};

class							Mainmenu
{
private:
	std::map<int, sf::Texture>	I;
	std::map<int, sf::Texture>	S;
	std::map<int, sf::Texture>	O;
	std::map<int, sf::Texture>	M;
	std::map<int, sf::Texture>	FN;
	sf::Texture					texture;
	sf::Sprite					sprite;
	sf::Font					font;
	sf::Music					music;
	sf::String					IP;
	sf::String					PORT;
	sf::String					NAME;
	std::string					ip;
	int							port;
	std::string					name;
	int							currentMenu;
	int							currentImg;
	int							currentSco;
	int							currentOpt;
	int							dif;
	float						volume;
	bool						fullscreen;
	bool						cleanscores;
	bool						inMenu;
	int							transparency;
	int							speedBlink;
	bool						amplitude;
public:
	Mainmenu(void);
	~Mainmenu(void);
	void				launchMenu(sf::RenderWindow *);
	bool				drawMenu(sf::RenderWindow *);
	void				loadAllTextures();
	void				loadIntro(sf::RenderWindow *);
	void				loadMenu(sf::RenderWindow *);
	void				loadScores(sf::RenderWindow *);
	void				loadOptions(sf::RenderWindow *);
	void				setAllTexture();
	void				getKey(sf::RenderWindow *, sf::Event event);
	void				getKeyLeft();
	void				getKeyUp();
	void				getKeyRight();
	void				getKeyDown();
	void				getKeyEnter(sf::RenderWindow *);
	void				fillIp(sf::Event);
	void				fillPort(sf::Event);
	void				getReady(sf::Event);
	void				fillName(sf::Event);
	bool				checkIp();
	bool				checkPort();
	sf::Text			newText(std::string, float, float, int, bool);
	sf::Text			newTextBlink(std::string, float, float, int);
	sf::Texture			loadTexture(const std::string &);
	sf::RectangleShape	setShape();
	void				affScores(sf::RenderWindow *);
	void				loopTab(sf::Event);
	void				initScores();
	std::string			getIp();
	int					getPort();			
	float				getVolume();
	void				setCurrentMenu(int);
	void				setInMenu(bool);
};