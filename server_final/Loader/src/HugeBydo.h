#ifndef HUGEBYDO_H
#define HUGEBYDO_H

#include "IModule.h"

#ifdef WIN32
#include <Windows.h>
#endif
#include <iostream>

class HugeBydo : public IModule
{
public:
	HugeBydo();
	HugeBydo(const HugeBydo &);
	HugeBydo & operator=(const HugeBydo &);
	virtual ~HugeBydo();
	virtual int getId() const;
	virtual void setId(int);
	virtual const std::pair<int, int> & getCoord() const;
	virtual bool informCollision(IModule *) const;
	virtual int move(IModule *);
	virtual void setLp(int);
	virtual int getLp() const;
	virtual void setCoord(std::pair<int, int>);
	virtual IModule::sprites getSprite() const;
	virtual int getPath() const;
	virtual void setSerial(const char);
	virtual char getSerial() const;
	virtual void setBasicInfo(int, std::pair<int, int> const &, const char, int);

private:
	int id;
	int lp;
	int path;
	char	serial;
	std::pair<int, int> coord;
	IModule::sprites	s;
};

#ifdef WIN32
extern "C" DLL_EXPORT HugeBydo *getInstanceFromDll()
{
	return (new HugeBydo());
}
#else
extern "C" HugeBydo *getInstanceFromDll()
{
  return (new HugeBydo());
}
#endif

#endif
