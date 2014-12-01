#include <iostream>
#include <string>
#include "WSocket.h"
#include "ConvPort.h"
#include "ConvAddr.h"
#include "SerializeAddr.h"

WSocket::WSocket(void)
{
	ConvPort p;
	this->_sin.sin_addr.s_addr = INADDR_ANY;
	this->_sin.sin_family = AF_INET;
	this->_sin.sin_port = p.conv(4242);
	this->_read = 0;
	this->_sockfd = 0;
	this->_write = 0;
	this->_lastSock = 0;
	this->_isUdp = false;
	this->_buf.len = 0;
	this->_buf.buf = 0;
	this->_isClient = false;
	this->_retBuf = "";
	this->_p = new PortToInt();
	WSADATA WsaData;
	WSAStartup(MAKEWORD(2,2), &WsaData);
}

WSocket::WSocket(std::string const &addr, int port)
{
	ConvPort p;
	ConvAddr a;

	this->_sin.sin_family = AF_INET;
	this->_sin.sin_port = p.conv(port);
	this->_read = 0;
	this->_sockfd = 0;
	this->_write = 0;
	this->_lastSock = 0;
	this->_isUdp = false;
	this->_buf.len = 0;
	this->_buf.buf = 0;
	this->_retBuf = "";
	this->_p = new PortToInt();
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
	WSADATA WsaData;
	WSAStartup(MAKEWORD(2,2), &WsaData);
}

WSocket::~WSocket(void)
{
	WSACleanup();
}

bool	WSocket::SocketInfo(struct sockaddr *addr, int backlog)
{
	int size = 0;
	if (!addr)
		addr = (SOCKADDR *)&this->_sin;
	size = sizeof(this->_sin);
	if (bind(this->_sockfd, addr, size) == SOCKET_ERROR)
		return (false);
	if (this->_isUdp == false)
	{
		if (listen(this->_sockfd, backlog) == SOCKET_ERROR)
			return (false);
	}
	else
		this->_clientList.push_back(this->_sockfd);
	return (true);
}

bool	WSocket::AcceptConnection(struct sockaddr* addr)
{
	int cli = 0, size = 0; 
	if (!addr)
		addr = (SOCKADDR *)&this->_sin;
	size = sizeof(*(addr));
	if ((cli = WSAAccept(this->_sockfd, addr, &size, 0, 0)) == INVALID_SOCKET)
		return (false);
	this->_clientList.push_back(cli);
	return (true);
}

bool	WSocket::Socket(int socket_family, int socket_type, int protocol)
{
	if ((this->_sockfd = WSASocket(socket_family, socket_type, protocol, 0, 0, 0)) == INVALID_SOCKET)
		return (false);
	if (protocol == IPPROTO_UDP)
		this->_isUdp = true;
	return (true);
}

bool	WSocket::Connect(struct sockaddr *addr)
{
	if (this->_isUdp == false)
	{
		int cli = 0, size = 0;
		if (!addr)
			addr = (SOCKADDR *)&this->_sin;
		size = sizeof(*(addr));
		if (WSAConnect(this->_sockfd, addr, size, 0, 0, 0, 0) == SOCKET_ERROR)
			return (false);
		this->_clientList.push_back(this->_sockfd);
		this->_sockfd = -1;
		this->_isClient = true;
	}
	else this->_clientList.push_back(this->_sockfd);
	return (true);
}

std::string & WSocket::Receive()
{
	DWORD flags = 0;
	int size = sizeof(this->_sin), i = 0;
	this->_retBuf.clear();
	for (std::vector<SOCKET>::iterator it = this->_clientList.begin(); it != this->_clientList.end(); ++it)
		{
			for (i = 0; i < PACKET_SIZE; ++i)
				this->_tmp[i] = 0;
			this->_buf.buf = this->_tmp;
			this->_buf.len = PACKET_SIZE;
			if (this->_isUdp == false)
				{
					if ((FD_ISSET((*it), this->_read) && (*it) != this->_sockfd))
					{
						if (WSARecv((*it), &(this->_buf), 1, &(this->_buf.len), &flags, 0, 0) != SOCKET_ERROR)
						{
							this->_lastSock = (*it);
							return (this->_retBuf.append(this->_buf.buf));
						}
					} else FD_CLR ((*it), this->_read);
				}
				else
					if (WSARecvFrom((*it), &(this->_buf), 1, &(this->_buf.len), &flags, (SOCKADDR *)&this->_sin, &size, 0, 0) != SOCKET_ERROR)	
					{
						u_long iMode = 1;
						DWORD nb = 0;
						this->_lastCli = this->_sin;
						if (WSAIoctl((*it), FIONBIO, &iMode, sizeof(iMode), 0, 0, &nb, 0, 0) == SOCKET_ERROR)
							std::cerr << WSAGetLastError() << std::endl;
						if (!this->_isClient)
							if (this->_udpClients.find(this->_p->conv(this->_sin.sin_port)) == this->_udpClients.end())
								this->_udpClients.insert(std::make_pair(this->_p->conv(this->_sin.sin_port), this->_sin));
						return (this->_retBuf.append(this->_buf.buf));
					}
		}
	this->_retBuf.clear();
	return (this->_retBuf);
}

bool	WSocket::Send(std::string const &buf, struct sockaddr *s)
{
	DWORD flags = 0;
	if (buf.size() < 1)
		return (false);
	std::vector<char> buff(buf.begin(), buf.end());
	this->_buf.buf = &buff[0];
	this->_buf.len = buf.size();
	for (std::vector<SOCKET>::iterator it = this->_clientList.begin(); it != this->_clientList.end(); ++it)
	{
		if (this->_isUdp == false)	
		{
			if (FD_ISSET((*it), this->_write) && (*it) != this->_sockfd)
			{
				if ((this->_lastSock != 0 && (*it) == this->_lastSock) || this->_isClient == true)
				{
					if (WSASend((*it), &(this->_buf), 1, &(this->_buf.len), 0, 0, 0) == SOCKET_ERROR)
						{
							if (closesocket((*it)) == -1)
								return (false);
							this->_clientList.erase(it);
							return (false);
						}
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
				if (WSASendTo((*it), &(this->_buf), 1, &(this->_buf.len), flags, s, sizeof((*s)), 0, 0) == SOCKET_ERROR)
					{
						this->_clientList.erase(it);
						return (false);
					}
			}
			else
			{
				for (std::map<int, struct sockaddr_in>::iterator jt = this->_udpClients.begin(); jt != this->_udpClients.end(); ++jt)
				{
					if (WSASendTo((*it), &(this->_buf), 1, &(this->_buf.len), flags, (SOCKADDR *)&(jt->second), sizeof(jt->second), 0, 0) == SOCKET_ERROR)
						{
							this->_udpClients.erase(jt);
							return (false);
						}
				}
			}
		}
	}
	return (true);
}


bool	WSocket::Select(fd_set *readfds, fd_set *writefds, struct timeval *t)
{
	size_t	 fd_max = 0;
	this->_read = readfds;
	this->_write = writefds;
	FD_ZERO(this->_read);
	FD_ZERO(this->_write);
	
	if (this->_clientList.size() == 0 && this->_isClient == false)
		this->_clientList.push_back(this->_sockfd);
	for (std::vector<SOCKET>::iterator it = this->_clientList.begin(); it != this->_clientList.end(); ++it)
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

sockaddr_in	const &	WSocket::GetLastUdpClient() const
{
	return (this->_lastCli);
}

int				WSocket::GetLastTcpClient() const
{
	return (this->_lastSock);
}
