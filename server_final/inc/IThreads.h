#pragma once
#include <string>
class IThreads
{
public:
	virtual ~IThreads(void) {};
	virtual int createThread (void * (*start_routine)(void *), void *params, int flag, int id) = 0;
	virtual std::string createThread (void * (*start_routine)(void *), void *params, int flag, std::string name) = 0;
	virtual void exitThread (int id) = 0;
	virtual void exitThread (std::string name) = 0;
	virtual bool joinThread (int threadld, int timeOut) = 0;
	virtual bool joinThread (std::string threadld, int timeOut) = 0;
	virtual bool getStatus (std::string threadName) = 0;
	virtual bool getStatus (int id) = 0;
	virtual void deleteThread(int id) = 0;
	virtual void deleteThread(std::string name) = 0;
};

struct ThreadParam {
	void		*(*ptrFunc)(void *);
	void		*param;
	IThreads	*thread;
	std::string	name;
	int			id;
};