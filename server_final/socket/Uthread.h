#pragma once
#include <map>
#include <iostream>
#include <pthread.h>
#include <cstdlib>
#include "IThreads.h"
#include "UMutex.h"
class UThread : public IThreads
{
private:
	std::map<int, pthread_t>			threadById;
	std::map<std::string, pthread_t>	threadByName;
	UMutex								mapThreadMutex;
public:
	UThread(void);
	~UThread(void);
	virtual int createThread (void *(*start_routine)(void *), void *params, int flag, int id);
	virtual std::string createThread (void * (*start_routine)(void *), void *params, int flag, std::string name);
	virtual void exitThread (int id);
	virtual void exitThread (std::string name);
	virtual bool joinThread (int threadld, int timeOut);
	virtual bool joinThread (std::string threadld, int timeOut);
	virtual bool getStatus (std::string threadName);
	virtual bool getStatus (int id);
	virtual void lock();
	virtual void unlock();
	virtual void deleteThread (int id);
	virtual void deleteThread (std::string name);

	// ci dessous les fonctions permettant le fonctionnement interne de l'objet
	
	pthread_t	createThread (void * (*start_routine)(void *), void *params, std::string name, int id);
};
