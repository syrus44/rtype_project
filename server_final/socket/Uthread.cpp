#include "Uthread.h"

UThread::UThread(void)
{
}


UThread::~UThread(void)
{
}

void	*MyThreadFunction(void *params)
{
	ThreadParam *parameters = static_cast<ThreadParam *>(params);

	parameters->ptrFunc(parameters->param);
	if (parameters->name.length() > 0)
		parameters->thread->deleteThread(parameters->name);
	else
		parameters->thread->deleteThread(parameters->id);
	return NULL;
}

pthread_t UThread::createThread (void * (*start_routine)(void *), void *params, std::string name, int id)
{
	pthread_t thread;
	ThreadParam	*parameters = new ThreadParam;
	parameters->param = params;
	parameters->thread = this;
	parameters->id = id;
	parameters->name = name;
	parameters->ptrFunc = start_routine;

	if (pthread_create(&thread, NULL, &MyThreadFunction, parameters) != 0)
		throw ("pthread_create failed");
	return thread;
}

int UThread::createThread (void * (*start_routine)(void *), void *params, int flag, int id)
{
	flag = flag;
	if (!(this->threadById.find(id) == this->threadById.end()))
	{
		std::string error("Thread id = ");
		error += id;
		error += "already exists.";
		throw(error);
	}
	this->lock();
	this->threadById[id] = this->createThread(start_routine, params, "", id);
	this->unlock();
	return id;
}

std::string UThread::createThread (void * (*start_routine)(void *), void *params, int flag, std::string name)
{
	flag = flag;
	if (!(this->threadByName.find(name) == this->threadByName.end()))
	{
		std::cerr << "Thread name " << name << " already exists." << std::endl;
	}
	this->lock();
	this->threadByName[name] = this->createThread(start_routine, params, name, -1);
	this->unlock();
	return name;
}

void UThread::deleteThread (int id)
{
	std::map<int, pthread_t>::iterator it = this->threadById.find(id);
	if (it != this->threadById.end())
	{
		this->lock();
		this->threadById.erase(it);
		this->unlock();
	}
	else
		std::cerr << "attempt to delete an unexisting thread" << std::endl;
}

void UThread::deleteThread (std::string name)
{
	std::map<std::string, pthread_t>::iterator it = this->threadByName.find(name);
	if (it != this->threadByName.end())
	{
		this->lock();
		this->threadByName.erase(it);
		this->unlock();
	}
	else
		std::cerr << "attempt to delete an unexisting thread" << std::endl;
}

void UThread::exitThread (int id)
{
	if (this->threadById.find(id) == this->threadById.end())
	{
		std::cerr << "Thread id " << id << " cannot be stopped. Doesn't exist." << std::endl;
		return;
	}
	if (pthread_cancel(this->threadById[id]) != 0)
	{
		std::cerr << "Impossible to exit thread id = " << id << std::endl;
	}
}

void UThread::exitThread (std::string name)
{
	if (this->threadByName.find(name) == this->threadByName.end())
	{
		std::cerr << "Thread name " << name << " cannot be stopped. Doesn't exist." << std::endl;
		return;
	}
	if (pthread_cancel(this->threadByName[name]) != 0)
	{
		std::cerr << "Thread name " << name << " cannot be stopped." << std::endl;
	}
}

bool UThread::joinThread (int id, int timeOut)
{
	timeOut = timeOut;
	if (pthread_join(this->threadById[id], NULL) != 0)
		return false;
	return true;
}

bool UThread::joinThread (std::string name, int timeOut)
{
	timeOut = timeOut;
	if (pthread_join(this->threadByName[name], NULL) != 0)
		return false;
	return true;
}

bool UThread::getStatus (int id)
{
	if (this->threadById.find(id) != this->threadById.end())
		return true;
	return false;
}

bool UThread::getStatus (std::string threadName)
{
	if (this->threadByName.find(threadName) != this->threadByName.end())
		return true;
	return false;
}

void UThread::lock()
{
	this->mapThreadMutex.lock();
}

void UThread::unlock()
{
	this->mapThreadMutex.unlock();
}
