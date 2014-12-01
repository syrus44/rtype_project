#pragma once
#ifndef CONVADDR_H_
#define CONVADDR_H_

#ifdef WIN32
	#include <WinSock2.h>
	#pragma comment(lib, "ws2_32.lib")
#else
	#include <arpa/inet.h>
#endif
#include <stdint.h>

class ConvAddr
{
public:
	ConvAddr(void);
	~ConvAddr(void);
	unsigned long int conv(std::string const &) const;
};

#endif

