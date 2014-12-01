#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <sstream>
#include <iostream>
#include <stdexcept>

class Exception : public std::runtime_error
{
public:
	Exception(const char *);
	virtual ~Exception() throw();
	virtual const char *what() const throw();

private:
	std::string msg;
};

#endif