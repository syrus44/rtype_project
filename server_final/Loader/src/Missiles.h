#ifndef MISSILES_H
#define MISSILES_H

#include "IModule.h"

#ifdef WIN32
#include <Windows.h>
#endif
#include <iostream>

class Missiles : public IModule
{
public:
	Missiles();
	Missiles(const Missiles &);
	Missiles & operator=(const Missiles &);
	virtual ~Missiles();
	virtual int getId() const;
	virtual void setId(int);
	virtual int getPath() const;
	virtual const std::pair<int, int> & getCoord() const;
	virtual void setLp(int);
	virtual int	getLp() const;
	virtual void setCoord(std::pair<int, int>);
	virtual bool informCollision(IModule *) const;
	virtual int move(IModule *);
	virtual IModule::sprites getSprite() const;
	virtual void setSerial(const char);
	virtual char getSerial() const;
	virtual void setBasicInfo(int, std::pair<int, int> const &, const char, int);

protected:
	int		id;
	int		lp;
	int		path;
	char	serial;
	std::pair<int, int> coord;
	IModule::sprites	s;
};

#ifdef WIN32
extern "C" DLL_EXPORT Missiles *getInstanceFromDll()
{
	return (new Missiles());
}
#else
extern "C" Missiles *getInstanceFromDll()
{
  return (new Missiles());
}
#endif

#endif
