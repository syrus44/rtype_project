#pragma once

#include	<SFML/Graphics.hpp>
#include	<iostream>
#include	<utility>
#include	"Parser.h"

#define	WIN_SIZE_X	1210
#define	WIN_SIZE_Y	767
#define	PLAYER_SIZE_X	33
#define	PLAYER_SIZE_Y	17
#define	BASIC_SIZE_X	30
#define	BASIC_SIZE_Y	30
#define	MISSILE_PLAYER_SIZE_X	20
#define	MISSILE_PLAYER_SIZE_Y	10
#define	MISSILE_MONSTER_SIZE_X	10
#define	MISSILE_MONSTER_SIZE_Y	10
#define	MEDIUM_MONSTER_SIZE_X	33
#define	MEDIUM_MONSTER_SIZE_Y	28
#define	HARD_MONSTER_SIZE_X		30
#define	HARD_MONSTER_SIZE_Y		32
#define	ROCK_SIZE_X				32
#define	ROCK_SIZE_Y				32

class							Display
{
	enum e_sprites
	{
		PLAYER_1		= 1,
		PLAYER_2		= 2,
		PLAYER_3		= 3,
		PLAYER_4		= 4,
		BASIC_MONSTER	= 5,
		MEDIUM_MONSTER	= 6,
		HARD_MONSTER	= 7,
		MISSILE_PLAYER	= 8,
		MISSILE_MONSTER	= 9,
		ROCK			= 10
	};

	enum e_pressedKey
	{
		UP		= 1,
		DOWN	= 2,
		LEFT	= 3,
		RIGHT	= 4,
		SHOOT	= 5
	};

private:
	std::map<int, sf::Sprite>			ship;
	std::map<int, sf::Sprite>			monsters;
	sf::Texture							backGroundTexture;
	sf::Texture							player1;
	sf::Texture							player2;
	sf::Texture							player3;
	sf::Texture							player4;
	sf::Texture							basicMonster;
	sf::Texture							mediumMonster;
	sf::Texture							hardMonster;
	sf::Texture							missilePlayer;
	sf::Texture							missileMonster;
	sf::Texture							rock;
	sf::Sprite							backGround;
	sf::Sprite							shipe;
	int									pressedKey;
	int									i;

public:
	Display(void);
	~Display(void);
	void								drawGame(sf::RenderWindow *, const t_mob *);
	void								getKey();
	sf::Texture							loadSprite(const std::string &, const sf::IntRect &) const;
	int									getPressedKey() const;
};