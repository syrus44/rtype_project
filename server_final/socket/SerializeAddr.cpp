#include "SerializeAddr.h"


SerializeAddr::SerializeAddr(void)
	: _serial ("")
{}


SerializeAddr::~SerializeAddr(void)
{}

std::string const & SerializeAddr::conv(struct sockaddr_in s)
{
	return (this->_serial.append(inet_ntoa(s.sin_addr)));
}