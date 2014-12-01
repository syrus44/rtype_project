#include <string>
#include <algorithm>
#include "LoadMap.h"
#include "Exception.h"
#include "OsFactory.h"

extern "C" 
{
	void	*ScrollingThread(void *loadmap)
	{
		LoadMap * m = reinterpret_cast<LoadMap*>(loadmap);
		
		while (1)
		{
			m->lockMap(true);
			if (!m->PushMap())
			{
				m->lockMap(false);
				m->setSend(false);
				return (0);
			}
			m->lockMap(false);
			OsFactory::Sleep()->wait(500);
			m->lockMap(true);
			m->setSend(true);
			m->lockMap(false);
		}
		return (0);
	}
}

LoadMap::LoadMap(void)
  : file(""), line(""), scroll(4800), colScroll(0), send(false), mut(OsFactory::Mutex())
{}

LoadMap::LoadMap(std::string const &f)
  : file(f), line(""), scroll(4800), colScroll(0), send(false), mut(OsFactory::Mutex())
{}

LoadMap::LoadMap(LoadMap const &other)
{
	if (&other != this)
	{
		this->file = other.getFile();
		this->map = other.getMap();
		this->scroll = other.getScroll();
	}
}

LoadMap &	LoadMap::operator=(LoadMap const &other)
{
	if (&other != this)
	{
		this->file = other.getFile();
		this->map = other.getMap();
		this->scroll = other.getScroll();
	}
	return (*this);
}

LoadMap::~LoadMap(void)
{}

bool	LoadMap::initLevel()
{
	Map	      m;
	IThreads *s = OsFactory::Thread();


	this->LoadFile();
	m.convertMap(this->map);
	m.initSocket();
	while (1)
	{
		if (m.TalkToClient())
			{
				if (!(s->getStatus("Scroll")))
				{
					m.sendMap(true, this->colScroll);
					m.sendMonster(this->colScroll);
					s->createThread(ScrollingThread, this, 0, "Scroll");
				}
			}
		if (this->send)
			{
				this->lockMap(true);
				m.updateMap(this->map.back());
				this->colScroll++;
				m.sendMap(false, this->colScroll);
				m.sendMonster(this->colScroll);
				this->send = false;
				this->lockMap(false);
			}
	}
	return (true);
}

void	LoadMap::LoadFile()
{
	int i = 0;
	if (!(this->file.empty()))
	{
		this->stream.open(this->file.c_str(), std::ios::in | std::ios::binary);
		if (this->stream)
		{
			for (i = 0; i < this->scroll; i += this->line.size())
			{
				this->line.clear();
				if(getline(this->stream, this->line))
				{
					if (this->line.at(this->line.size() - 1) == '\r')
						this->line = this->line.substr(0, this->line.size() - 1);
					size_t i = count_if(this->line.begin(), this->line.end(), isValid);
					if (this->line.size() == COL_SIZE &&
						i == this->line.size())
						this->map.push_back(this->line);
					else
					{
						this->stream.close();
						throw Exception("Invalid map height");
					}
				}
				else break;
			}
			if (i != this->scroll)
			{
				this->stream.close();
				throw Exception("Invalid map width");
			}
		}
		else throw Exception("Map can't be loaded");
	}
	else throw Exception("Invalid file name");
}

std::string const &	LoadMap::ScrollFile()
{
	if (!(this->file.empty()))
	{
		if (this->stream.is_open())
		{
			this->line.clear();
			if (getline(this->stream, this->line))
				{
					if (this->line.at(this->line.size() - 1) == '\r')
						this->line = this->line.substr(0, this->line.size() - 1);
					this->scroll += this->line.size();
					return (this->line);
				}
		}
	}
	else throw Exception("Invalid file name");
	return (this->line);
}

bool	LoadMap::PushMap()
{
	if (!(this->map.empty()))
		this->map.erase(this->map.begin());
	this->line.clear();
	std::string col = this->ScrollFile();
	size_t i = count_if(col.begin(), col.end(), isValid);
	if (col.size() == COL_SIZE && i == col.size())
	{
		this->map.push_back(col);
		return(true);
	}
	this->stream.close();
	if (col.size() != COL_SIZE && !(this->stream.eof()))
		throw Exception("Invalid map height");
	return (false);
}

void	LoadMap::setMap(std::vector<std::string> const &v)
{
	this->map = v;
}

void	LoadMap::setScroll(int scroll)
{
	this->scroll = scroll;
}

int		LoadMap::getScroll() const
{
	return (this->scroll);
}

std::string const &		LoadMap::getFile() const
{
	return (this->file);
}

std::vector<std::string> const & LoadMap::getMap() const
{
	return (this->map);
}

void				LoadMap::showMap()
{
	for (std::vector<std::string>::iterator it = this->map.begin(); it != this->map.end(); ++it)
		std::cout << (*it) << std::endl;
}

void				LoadMap::setSend(bool b)
{
	this->send = b;
}

void				LoadMap::lockMap(bool lock)
{
	if (lock)
		this->mut->lock();
	else
		this->mut->unlock();
}

bool	isValid(char c)
{
	std::string pattern("EMHVPR");
	return (pattern.find(c) != std::string::npos);
}
