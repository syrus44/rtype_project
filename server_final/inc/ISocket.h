#ifndef ISOCKET_H_
#define ISOCKET_H

#ifdef WIN32
	#include <WinSock2.h>
	#pragma comment(lib, "ws2_32.lib")
#else
	#include <sys/select.h>
	#include <sys/types.h>
	#include <sys/socket.h>
	#include <arpa/inet.h>
	#include <unistd.h>
	#include <sys/time.h>
	#include <sys/wait.h>
	#include <sys/types.h>
#endif

#include <iostream>

class ISocket
{
public:
	ISocket() {};
	ISocket(std::string const &, int);
	virtual ~ISocket() {};
	virtual bool SocketInfo(struct sockaddr *, int) = 0;
	virtual bool AcceptConnection(struct sockaddr *) = 0;
	virtual bool Socket(int, int, int) = 0;
	virtual bool Connect(struct sockaddr *) = 0;
	virtual bool Send(std::string const &, struct sockaddr *) = 0;
	virtual std::string & Receive() = 0;
	virtual bool Select (fd_set *, fd_set *, struct timeval *) = 0; 
	virtual int	 GetLastTcpClient() const = 0;
	virtual struct sockaddr_in const & GetLastUdpClient() const = 0;
};

#endif