#ifndef USOCKET_H
#define USOCKET_H


#include <vector>
#include <map>
#include "ISocket.h"
#include "PortToInt.h"
#define PACKET_SIZE 512

class USocket : public ISocket
{
	int					_sockfd;
	std::vector<int>	_clientList;
	std::map<int, struct sockaddr_in> _udpClients;
	std::string			_buf;
	struct sockaddr_in	_sin;
	char				_tmp[PACKET_SIZE];
	fd_set				*_read;
	fd_set				*_write;
	bool				_isUdp;
	int					_lastSock;
	struct sockaddr_in	_lastCli;
	bool				_isClient;
	PortToInt			*_p;
public:
	USocket(void);
	USocket(std::string const &, int);
	~USocket(void);
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