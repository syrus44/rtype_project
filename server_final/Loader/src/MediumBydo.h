#ifndef MEIDUMBYDO_H
#define MEDIUMBYDO_H

#include "IModule.h"

#ifdef WIN32
#include <Windows.h>
#endif
#include <iostream>

class MediumBydo : public IModule
{
public:
	MediumBydo();
	MediumBydo(const MediumBydo &);
	MediumBydo & operator=(const MediumBydo &);
	virtual ~MediumBydo();
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
	int		 lp;
	int		moy;
	char	serial;
	std::pair<int, int>		coord;
	IModule::sprites	s;
};

#ifdef WIN32
extern "C" DLL_EXPORT MediumBydo *getInstanceFromDll()
{
	return (new MediumBydo());
}
#else
extern "C" MediumBydo *getInstanceFromDll()
{
  return (new MediumBydo());
}
#endif

#endif
