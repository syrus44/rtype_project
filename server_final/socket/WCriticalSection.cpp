#include "WCriticalSection.h"


WCriticalSection::WCriticalSection(void)
{
	InitializeCriticalSection(&(this->CriticalSection));
}

void	WCriticalSection::lock()
{
	EnterCriticalSection(&(this->CriticalSection));
}

void	WCriticalSection::unlock()
{
	LeaveCriticalSection(&(this->CriticalSection));
}

WCriticalSection::~WCriticalSection(void)
{
	DeleteCriticalSection(&(this->CriticalSection));
}
