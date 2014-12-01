#pragma once
#ifndef SERIALIZEADDR_H_
#define SERIALIZEADDR_H_
#include <iostream>

#ifdef WIN32
	#include <WinSock2.h>
	#pragma comment(lib, "ws2_32.lib")
#else
	#include <arpa/inet.h>
#endif

class SerializeAddr
{
	std::string	_serial;
public:
	SerializeAddr(void);
	~SerializeAddr(void);
	std::string const & conv(struct sockaddr_in);
};

#endif
