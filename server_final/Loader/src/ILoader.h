#ifndef ILOADER_H
#define ILOADER_H

#include <iostream>
#include <sstream>
#include <string>

#ifdef WIN32
#include <Windows.h>
#include <winbase.h>
#else
#include <dlfcn.h>
#endif

#include <map>

template<class T>
class ILoader
{
public:
	virtual ~ILoader();
	virtual bool openLibrary(int, const std::string &) = 0;
	virtual bool closeLibrary(int) = 0;
	virtual void  libError(const char *) = 0;
	virtual void getLibFonction(int, const std::string &) = 0;
	virtual bool checkFileName(const std::string &) = 0;
	virtual T 	*getSymbol() const = 0;

private:
	T *(*libSymbol)();
};

template<class T>
ILoader<T>::~ILoader()
{}

#endif