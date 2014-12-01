#ifndef IMODULE_H
#define IMODULE_H

#include <utility>
#include <string>
#define DLL_EXPORT __declspec(dllexport)
#define DLL_IMPORT __declspec(dllimport)



class IModule
{
public:
	typedef enum e_type
	{
		UNKNOWN	 = 0,
		PLAYER_1	 = 1,
		PLAYER_2	 = 2,
		PLAYER_3	 = 3,
		PLAYER_4	 = 4,
		BASIC_MONSTER	= 5,
		MEDIUM_MONSTER	= 6,
		HARD_MONSTER	= 7,
		MISSILE_PLAYER	= 8,
		MISSILE_MONSTER	= 9,
		ROCK	 = 10
	}			 sprites;

	virtual ~IModule() {};
	virtual void setId(int) = 0;
	virtual int getId() const = 0;
	virtual void setCoord(std::pair<int, int>) = 0;
	virtual const std::pair<int, int> & getCoord() const = 0;
	virtual void setLp(int) = 0;
	virtual int getLp() const = 0;
	virtual bool informCollision(IModule *) const = 0;
	virtual int move(IModule *) = 0;
	virtual IModule::sprites getSprite() const = 0;
	virtual int getPath() const = 0;
	virtual void setSerial(const char) = 0;
	virtual char getSerial() const = 0;
	virtual void setBasicInfo(int, std::pair<int, int> const &, const char, int) = 0;
};

#endif
