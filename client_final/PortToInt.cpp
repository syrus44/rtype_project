#include "PortToInt.h"


PortToInt::PortToInt(void)
{}


PortToInt::~PortToInt(void)
{}

int		PortToInt::conv(uint16_t netshort) const
{
	return (ntohs(netshort));
}
