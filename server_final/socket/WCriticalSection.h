#pragma once
#include <windows.h>
#include <iostream>
#include "IMutex.h"

class WCriticalSection : public IMutex
{
private:
	CRITICAL_SECTION  CriticalSection;
public:
	WCriticalSection(void);
	~WCriticalSection(void);
	virtual void lock();
	virtual void unlock();
};

