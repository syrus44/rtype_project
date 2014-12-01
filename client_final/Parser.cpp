#include "Parser.h"

Parser::Parser()
{
	this->sendMap = true;
	this->mob = new t_mob;
	this->_tempstart = "P\t";
}

Parser::~Parser()
{
	if (this->mob)
		delete this->mob;
}

void		Parser::serializeToString()
{
	std::string				nb = "";

	nb = this->_rawString.substr(0, this->_rawString.find("\t"));
	std::istringstream	buff1(nb);
	buff1 >> this->mob->id;
	nb.clear();
	this->_rawString.erase(0, this->_rawString.find("\t") + 1);

	nb = this->_rawString.substr(0, this->_rawString.find("\t"));
	std::istringstream	buff2(nb);
	buff2 >> this->mob->x;
	nb.clear();
	this->_rawString.erase(0, this->_rawString.find("\t") + 1);

	nb = this->_rawString.substr(0, this->_rawString.find("\t"));
	std::istringstream	buff3(nb);
	buff3 >> this->mob->y;
	nb.clear();
	this->_rawString.erase(0, this->_rawString.find("\t") + 1);

	nb = this->_rawString.substr(0, this->_rawString.find("\t"));
	std::istringstream	buff4(nb);
	buff4 >> this->mob->path;
	nb.clear();
	this->_rawString.erase(0, this->_rawString.find("\t") + 1);

	this->_rawString.clear();
}

void		Parser::stringToSerialize(const t_mob *mob)
{
	this->_serializeData += mob->id;
	this->_serializeData += '\t';
	this->_serializeData += mob->x;
	this->_serializeData += '\t';
	this->_serializeData += mob->y;
	this->_serializeData += '\t';
	this->_serializeData += mob->path;
	this->_serializeData += '\t';
}

void		Parser::cleanSerialize()
{
	this->mob->id = 0;
	this->mob->x = 0;
	this->mob->y = 0;
	this->mob->path = 0;
	this->_rawString.clear();
}

void		Parser::setStr(const std::string &_str)
{
	this->_rawString = _str;
	if (this->parseStr())
		this->serializeToString();
	else
		std::cout << "chaine non valide" << std::endl;
}

t_mob		*Parser::getStructMob() const
{
	return (this->mob);
}

std::string	Parser::getStr() const
{
	return (this->_rawString);
}

std::string	Parser::getSerializeData() const
{
	return (this->_serializeData);
}

int			Parser::getIdPlayer()
{
	return (this->_idPlayer);
}

bool		Parser::parseStr()
{
	int			member = 0;

	if (this->_rawString.compare(0, this->_tempstart.find("\t") + 1, this->_tempstart) == 0)
	{
		this->_rawString.erase(0, this->_rawString.find("\t") + 1);
		std::istringstream buff(this->_rawString);
		buff >> this->_idPlayer;
		return (true);
	}
	if (this->_rawString.empty())
		return (false);
	for (std::string::iterator	it = this->_rawString.begin(); it != this->_rawString.end(); ++it)
	{
		if ((*it) == '\t')
			member++;
		if (member == 4)
			return (true);
	}
	return (false);
}

int		Parser::Init(const std::string &ipAdress, const int &port)
{
	this->s = NULL;

	#ifdef WIN32
		s = new WSocket(ipAdress, port);
	#else
		s = new USocket(ipAdress, port);
	#endif

	if (this->s->Socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP) == false)
		return (-1);
	if (this->s->Connect(0) == false)
		return (-1);
	return (0);
}

bool			Parser::doConnection(const int &id, const int &key)
{
	std::ostringstream	oss;
	std::string rec = "";
	if (id == 0 && key == 0 && this->sendMap == true)
		rec = "map\n";
	else if (id > 0 && key > 0)
	{
		this->sendMap = false;
		oss << id;
		rec += oss.str();
		oss.str("");
		rec += "\t";
		oss << key;
		rec += oss.str();
	}
	else
		rec = "\t";
	if (this->s->Send(rec, 0) == true)
		{
			rec = this->s->Receive();
			if (!(rec.empty()))
				this->setStr(rec);
			else
				return (true);
		}
	return (true);
}
