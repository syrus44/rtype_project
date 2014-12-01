#include <iostream>
#include <sys/socket.h>
#include "USocket.h"
#include "ConvPort.h"
#include "ConvAddr.h"

USocket::USocket(void)
{
	ConvPort p;
	this->_sin.sin_addr.s_addr = INADDR_ANY;
	this->_sin.sin_family = AF_INET;
	this->_sin.sin_port = p.conv(4242);
	this->_read = 0;
	this->_sockfd = -1;
	this->_write = 0;
	this->_lastSock = 0;
	this->_isUdp = false;
	this->_buf = "";
	this->_isClient = false;
	this->_p = new PortToInt();
}

USocket::USocket(std::string const &addr, int port)
{
	ConvPort p;
	ConvAddr a;
	
	this->_sin.sin_family = AF_INET;
	this->_sin.sin_port = p.conv(port);
	this->_read = 0;
	this->_write = 0;
	this->_lastSock = 0;
	this->_isUdp = false;
	this->_buf = "";
	this->_sockfd = -1;
	if (addr.size() > 0)	
	{
		this->_isClient = true;
		this->_sin.sin_addr.s_addr = a.conv(addr);
	}
	else
	{
		this->_isClient = false;
		this->_sin.sin_addr.s_addr = INADDR_ANY;
	}
	this->_p = new PortToInt();
}


USocket::~USocket(void)
{}

bool	USocket::SocketInfo(struct sockaddr *addr, int backlog)
{
	int size = 0;
	if (!addr)
		addr = (sockaddr *)&this->_sin;
	size = sizeof(this->_sin);
	if (bind(this->_sockfd, addr, size) == -1)
		return (false);
	if (this->_isUdp == false)
	{
		if (listen(this->_sockfd, backlog) == -1)
			return (false);
	}
	else
		this->_clientList.push_back(this->_sockfd);
	return (true);
}

bool	USocket::AcceptConnection(struct sockaddr* addr)
{
	int cli = 0;
	socklen_t size;
	if (!addr)
		addr = (sockaddr *)&this->_sin;
	size = sizeof(addr);
	if ((cli = accept(this->_sockfd, addr, &size)) == -1)
		return (false);
	this->_clientList.push_back(cli);
	return (true);
}

std::string & USocket::Receive()
{
	this->_buf.clear();
	socklen_t size = sizeof(this->_sin);
	int i = 0;

	for (std::vector<int>::iterator it = this->_clientList.begin(); it != this->_clientList.end(); ++it)
		{
			for (i = 0; i < PACKET_SIZE; ++i)
				this->_tmp[i] = 0;
			if (this->_isUdp == false)
				{
					if ((FD_ISSET((*it), this->_read) && (*it) != this->_sockfd))
					{
						if (recv((*it), this->_tmp, PACKET_SIZE, 0) > 0)
						{
							this->_lastSock = (*it);
							return (this->_buf.append(this->_tmp));
						}
					} else {FD_CLR ((*it), this->_read);}
				}
				else
				{
					if (recvfrom((*it), this->_tmp, PACKET_SIZE, MSG_DONTWAIT, (sockaddr *)&this->_sin, &size) > 0)	
					{
						this->_lastCli = this->_sin;
						if (!this->_isClient)
							if (this->_udpClients.find(this->_p->conv(this->_sin.sin_port)) == this->_udpClients.end())
								this->_udpClients.insert(std::make_pair(this->_p->conv(this->_sin.sin_port), this->_sin));
						return (this->_buf.append(this->_tmp));
					}
				}
		}
	this->_buf.clear();
	return (this->_buf);
}

bool	USocket::Send(std::string const &buf, struct sockaddr *s)
{
	for (std::vector<int>::iterator it = this->_clientList.begin(); it != this->_clientList.end(); ++it)
	{
		if (this->_isUdp == false)	
		{
			if (FD_ISSET((*it), this->_write) && (*it) != this->_sockfd)
			{
				if ((this->_lastSock != 0 && (*it) == this->_lastSock) || this->_isClient == true)
				{
					if (send((*it), buf.c_str(), buf.size(), 0) < 0)
						{
							if (close((*it)) == -1)
								return (false);
							this->_clientList.erase(it);
							return (false);
						}
					FD_CLR ((*it), this->_write);
					this->_lastSock = 0;
				}
			} else FD_CLR((*it), this->_write);
		}
		else	
		{
			if (this->_isClient || s != 0)
			{
				if (!s)
					s = (sockaddr *)&(this->_sin);
				if (sendto((*it), buf.c_str(), buf.size(), 0, s, sizeof((*s))) < 0)
					{
						this->_clientList.erase(it);
						return (false);
					}
			}
			else
			{
				for (std::map<int, struct sockaddr_in>::iterator jt = this->_udpClients.begin(); jt != this->_udpClients.end(); ++jt)
				{
					if (sendto((*it), buf.c_str(), buf.size(), 0, (sockaddr *)&(jt->second), sizeof(this->_sin)) < 0)
						{
							if (close((*it)) == -1)
								return (false);
							this->_clientList.erase(it);
							return (false);
						}
				}
			}
		}
	}
	return (true);
}

bool	USocket::Socket(int socket_family, int socket_type, int protocol)
{
	if ((this->_sockfd = socket(socket_family, socket_type, protocol)) == -1)
		return (false);
	if (protocol == IPPROTO_UDP)
		this->_isUdp = true;
	return (true);
}

bool	USocket::Connect(struct sockaddr *addr)
{
	if (this->_isUdp == false)
	{
		int size = 0;
		if (!addr)
			addr = (sockaddr *)&this->_sin;
		size = sizeof(*(addr));
		if (connect(this->_sockfd, addr, size) == -1)
			return (false);
		this->_clientList.push_back(this->_sockfd);
		this->_sockfd = -1;
		this->_isClient = true;
	}
	else
		this->_clientList.push_back(this->_sockfd);
	return (true);
}

bool	USocket::Select(fd_set *readfds, fd_set *writefds, struct timeval *t)
{
	int	 fd_max = 0;
	this->_read = readfds;
	this->_write = writefds;
	FD_ZERO(this->_read);
	FD_ZERO(this->_write);
	
	if (this->_clientList.size() == 0 && this->_isClient == false)
		this->_clientList.push_back(this->_sockfd);
	for (std::vector<int>::iterator it = this->_clientList.begin(); it != this->_clientList.end(); ++it)
		 {
			FD_SET((*it), this->_read);
			FD_SET((*it), this->_write);
			if (fd_max < (*it))
				fd_max = (*it);
		 }
	 if (select(fd_max + 1, this->_read, this->_write, 0, t) == -1)
		 return (false);
	 if (!(this->_isClient))
		if (!(FD_ISSET(this->_sockfd, this->_read)))
			 return (false);
	return (true);
}

sockaddr_in	const &	USocket::GetLastUdpClient() const
{
	return (this->_lastCli);
}

int				USocket::GetLastTcpClient() const
{
	return (this->_lastSock);
}