#ifndef PLAYERSHIP_H
#define PLAYERSHIP_H

#include "IModule.h"

#ifdef WIN32
#include <Windows.h>
#endif
#include <iostream>

class PlayerShip : public IModule
{
public:
	PlayerShip();
	PlayerShip(const PlayerShip &);
	PlayerShip & operator=(const PlayerShip &);
	virtual ~PlayerShip();
	virtual int getId() const;
	virtual void setId(int);
	virtual const std::pair<int, int> & getCoord() const;
	virtual void setLp(int);
	virtual int	getLp() const;
	virtual void setCoord(std::pair<int, int>);
	virtual bool informCollision(IModule *) const;
	virtual int move(IModule *);
	virtual IModule::sprites getSprite() const;
	virtual int getPath() const;
	virtual void setSerial(const char);
	virtual char getSerial() const;
	virtual void setBasicInfo(int, std::pair<int, int> const &, const char, int);

protected:
	int		id;
	int		lp;
	char	serial;
	int		path;
	std::pair<int, int> coord;
	IModule::sprites	s;
};

#ifdef WIN32
extern "C" DLL_EXPORT PlayerShip *getInstanceFromDll()
{
	return (new PlayerShip());
}
#else
extern "C" PlayerShip *getInstanceFromDll()
{
  return (new PlayerShip());
}
#endif

#endif
