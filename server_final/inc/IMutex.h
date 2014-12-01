#pragma once
class IMutex
{
public:
	virtual ~IMutex(void);
	virtual void lock() = 0;
	virtual void unlock() = 0;
};