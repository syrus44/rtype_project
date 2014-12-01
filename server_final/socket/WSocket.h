#pragma once
#ifndef	WSOCKET_H_
#define WSOCKET_H_

#include <vector>
#include <map>
#include <utility>
#include "PortToInt.h"
#include "ISocket.h"
#define PACKET_SIZE 512

class WSocket : public ISocket
{
	std::vector<SOCKET>		_clientList;
	std::map<int, struct sockaddr_in> _udpClients;
	SOCKET					_sockfd;
	SOCKET					_lastSock;
	PortToInt				*_p;
	bool					_isClient;
	bool					_isUdp;
	fd_set					*_read;
	fd_set					*_write;
	SOCKADDR_IN				_sin;
	WSABUF					_buf;
	std::string				_retBuf;
	char					_tmp[PACKET_SIZE];
	struct sockaddr_in		_lastCli;
public:
	WSocket(void);
	WSocket(std::string const &, int);
	~WSocket(void);
	virtual bool SocketInfo(struct sockaddr *, int);
	virtual bool AcceptConnection(struct sockaddr *);
	virtual bool Socket(int, int, int);
	virtual bool Connect(struct sockaddr *);
	virtual bool Send(std::string const &, struct sockaddr *);
	virtual std::string & Receive();
	virtual bool Select (fd_set *, fd_set *, struct timeval *); 
	virtual int	 GetLastTcpClient() const;
	virtual struct sockaddr_in const & GetLastUdpClient() const;
};

#endif