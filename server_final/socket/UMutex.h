#ifndef _UMUTEX_
#define _UMUTEX_

#include <pthread.h>
#include <iostream>
#include "IMutex.h"

class UMutex : public IMutex
{
private:
	pthread_mutex_t	mutex;
public:
	UMutex(void);
	~UMutex(void);
	virtual void lock();
	virtual void unlock();
};

#endif
