#ifndef MONSTERBONUS_H
#define MONSTERBONUS_H

#include "IModule.h"

#ifdef WIN32
#include <Windows.h>
#endif
#include <iostream>

class MonsterBonus : public IModule
{
public:
	MonsterBonus();
	MonsterBonus(const MonsterBonus &);
	MonsterBonus & operator=(const MonsterBonus &);
	virtual ~MonsterBonus();
	virtual void setId(int);
	virtual int getId() const;
	virtual int getPath() const;
	virtual void setCoord(std::pair<int, int>);
	virtual void setLp(int);
	virtual int getLp() const;
	virtual const std::pair<int, int> & getCoord() const;
	virtual int move(IModule *);
	virtual bool informCollision(IModule *) const;
	virtual IModule::sprites getSprite() const;
	virtual void setSerial(const char);
	virtual char getSerial() const;
	virtual void setBasicInfo(int, std::pair<int, int> const &, const char, int);

private:
	int		id;
	int	 path;
	int		lp;
	char	serial;
	std::pair<int, int> coord;
	IModule::sprites	s;
};

#ifdef WIN32
extern "C" DLL_EXPORT MonsterBonus *getInstanceFromDll()
{
	return (new MonsterBonus());
}
#else
extern "C" MonsterBonus *getInstanceFromDll()
{
  return (new MonsterBonus());
}
#endif

#endif
