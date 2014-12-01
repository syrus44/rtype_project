#pragma once
#ifndef PORTTOINT_H_
#define PORTTOINT_H_

#ifdef WIN32
	#include <WinSock2.h>
	#pragma comment(lib, "ws2_32.lib")
#else
	#include <arpa/inet.h>
#endif
#include <stdint.h>

class PortToInt
{
public:
	PortToInt(void);
	~PortToInt(void);
	int	conv(uint16_t) const;
};

#endif