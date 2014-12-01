#include "Exception.h"

Exception::Exception(const char *msg) : std::runtime_error(msg)
{
	std::ostringstream	oss;

	oss << msg << ".";
	this->msg = oss.str();
}

Exception::~Exception() throw()
{
}

const char *Exception::what() const throw()
{
	return (this->msg.c_str());
}
