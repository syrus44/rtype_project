#pragma once
#ifndef CONVPORT_H_
#define CONVPORT_H_

#ifdef WIN32
	#include <WinSock2.h>
	#pragma comment(lib, "ws2_32.lib")
#else
	#include <arpa/inet.h>
#endif
#include <stdint.h>

class ConvPort
{
public:
	ConvPort(void);
	uint16_t conv(uint16_t) const;
	~ConvPort(void);
};

#endif