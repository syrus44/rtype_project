#pragma once

#ifndef WTHREAD_H
#define WTHREAD_H

#include <map>
#include "IThreads.h"
#include "WCriticalSection.h"

class WThread :	public IThreads
{
private:
	std::map<int, HANDLE>			threadById;
	std::map<std::string, HANDLE>	threadByName;
	WCriticalSection				mutForThreadMaps;
public:
	WThread(void);
	~WThread(void);

	// Fonctions virtuelles héritées de IThreads
	virtual int createThread (void * (*start_routine)(void *), void *params, int flag, int id);
	virtual std::string createThread (void * (*start_routine)(void *), void *params, int flag, std::string name);
	virtual void exitThread (int id);
	virtual void exitThread (std::string name);
	virtual bool joinThread (int threadld, int timeOut);
	virtual bool joinThread (std::string threadName, int timeOut);
	virtual bool getStatus (std::string threadName);
	virtual bool getStatus (int id);
	virtual void lock();
	virtual void unlock();

	// Fonctions nécessaires au fonctionnement de la classe WThread
	HANDLE	createThread (void * (*start_routine)(void *), void *params, int flag, int id, std::string name);
	HANDLE	getThreadByName(std::string name);
	HANDLE	getThreadById(int id);
	void	deleteThread (std::string name);
	void	deleteThread (int id);
};

#endif