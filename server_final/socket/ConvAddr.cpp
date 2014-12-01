#include <iostream>
#include "ConvAddr.h"


ConvAddr::ConvAddr(void)
{}


ConvAddr::~ConvAddr(void)
{}

unsigned long int ConvAddr::conv(std::string const &addr) const
{
	return (inet_addr(addr.c_str()));
}
