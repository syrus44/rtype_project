#ifndef BASICBYDO_H
#define BASICBYDO_H

#include "IModule.h"

#ifdef WIN32
#include <windows.h>
#endif
#include <iostream>

class BasicBydo : public IModule
{
public:
	BasicBydo();
	BasicBydo(const BasicBydo &);
	BasicBydo &	operator=(const BasicBydo &);
	virtual ~BasicBydo();
	virtual void setId(int);
	virtual int getId() const;
	virtual void setCoord(std::pair<int, int>);
	virtual const std::pair<int, int> & getCoord() const;
	virtual int getPath() const;
	virtual void setLp(int);
	virtual int getLp() const;
	virtual bool informCollision(IModule *) const;
	virtual int move(IModule *);
	virtual IModule::sprites getSprite() const;
	virtual void setSerial(const char);
	virtual char getSerial() const;
	virtual void setBasicInfo(int, std::pair<int, int> const &, const char, int);

protected:
	int		id;
	int		path;
	int		lp;
	char	serial;
	std::pair<int, int>		coord;
	IModule::sprites		s;
};

#ifdef WIN32
extern "C" DLL_EXPORT BasicBydo *getInstanceFromDll()
{
	return (new BasicBydo());
}
#else
extern "C" BasicBydo *getInstanceFromDll()
{
  return (new BasicBydo());
}
#endif

#endif
