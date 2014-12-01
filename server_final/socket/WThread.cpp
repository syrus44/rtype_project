#include <tchar.h>
#include <iostream>
#include "WThread.h"

WThread::WThread(void)
{
}

WThread::~WThread(void)
{
}

DWORD WINAPI MyThreadFunction( LPVOID lpParam ) {

	ThreadParam *parameters = static_cast<ThreadParam *>(lpParam);
	parameters->ptrFunc(parameters->param);

	if (parameters->name.length() > 0)
		parameters->thread->deleteThread(parameters->name);
	else
		parameters->thread->deleteThread(parameters->id);
	delete parameters;
	return 0;
}

HANDLE WThread::createThread (void * (*start_routine)(void *), void *params, int flag, int id, std::string name)
{
	HANDLE	checkThread;
	DWORD   dwThreadIdArray;
	
	ThreadParam	*intermediateParameters = new ThreadParam;
	intermediateParameters->thread = this;
	intermediateParameters->id = id;
	intermediateParameters->name = name;
	intermediateParameters->param = params;
	intermediateParameters->ptrFunc = start_routine;

	checkThread = CreateThread(
		NULL,                   // default security attributes
        0,                      // use default stack size  
        MyThreadFunction,       // thread function name
        intermediateParameters,	// argument to thread function 
        flag,
        &dwThreadIdArray);		// returns the thread identifier 

	if (checkThread == NULL)
		throw("Failed to create thread");
	return checkThread;
}

int	WThread::createThread (void * (*start_routine)(void *), void *params, int flag, int id) 
{
	if (this->threadById.find(id) != this->threadById.end())
	{
		std::string error("Thread id = ");
		error += id; error += " already exists.";
		throw(error);
	}

	this->lock();
	this->threadById[id] = this->createThread(start_routine, params, flag, id, "");
	this->unlock();
	return id;
}

std::string	WThread::createThread (void * (*start_routine)(void *), void *params, int flag, std::string name) 
{
	if (this->threadByName.find(name) != this->threadByName.end())
	{
		std::cerr << "Thread named " << name << " already exists." << std::endl;
	}

	this->lock();
	this->threadByName[name] = this->createThread(start_routine, params, flag, -1, name);
	this->unlock();
	return name;
}

void WThread::deleteThread (int id)
{
	std::map<int, HANDLE>::iterator it = this->threadById.find(id);
	if (it != this->threadById.end())
	{
		this->lock();
		this->threadById.erase(it);
		this->unlock();
	}
	else
		std::cerr << "attempt to delete an unexisting thread" << std::endl;
}

void WThread::deleteThread (std::string name)
{
	std::map<std::string, HANDLE>::iterator it = this->threadByName.find(name);
	if (it != this->threadByName.end())
	{
		this->lock();
		this->threadByName.erase(it);
		this->unlock();
	}
	else
		std::cerr << "attempt to delete an unexisting thread" << std::endl;
}

void WThread::exitThread (int id)
{
	HANDLE objThread = this->getThreadById(id);
	TerminateThread(objThread, 0);
	CloseHandle(objThread);
}

void WThread::exitThread (std::string name)
{
	HANDLE objThread = this->getThreadByName(name);
	TerminateThread(objThread, 0);
	CloseHandle(objThread);
}

HANDLE	WThread::getThreadById(int id)
{
	std::map<int,HANDLE>::iterator it;
	it = this->threadById.find(id);
	return it->second;
}

HANDLE	WThread::getThreadByName(std::string name)
{
	std::map<std::string,HANDLE>::iterator it;
	it = this->threadByName.find(name);
	return it->second;
}

bool WThread::joinThread (int threadId, int timeOut)
{
	if (WaitForSingleObject(this->getThreadById(threadId), timeOut) == WAIT_FAILED)
		return false;
	return true;
}

bool WThread::joinThread (std::string threadName, int timeOut)
{
	if (WaitForSingleObject(this->getThreadByName(threadName), timeOut) == WAIT_FAILED)
		return false;
	return true;
}

bool WThread::getStatus (int id)
{
	if (this->threadById.find(id) != this->threadById.end())
		return true;
	return false;
}

bool WThread::getStatus (std::string threadName)
{
	if (this->threadByName.find(threadName) != this->threadByName.end())
		return true;
	return false;
}

void WThread::lock()
{
	this->mutForThreadMaps.lock();
}

void WThread::unlock()
{
	this->mutForThreadMaps.unlock();
}