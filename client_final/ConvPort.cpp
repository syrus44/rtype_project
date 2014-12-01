#include "ConvPort.h"

ConvPort::ConvPort(void)
{}


ConvPort::~ConvPort(void)
{}

uint16_t ConvPort::conv(uint16_t port) const
{
	return (htons(port));
}