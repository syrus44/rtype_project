#ifndef WLOADER_H
#define WLOADER_H

#include "ILoader.h"

template<class T>
class WLoader : public ILoader<T>
{
	std::map<int, HMODULE>		_libraries;
public:
	WLoader();
	virtual ~WLoader();
	virtual bool openLibrary(int, const std::string &);
	virtual bool closeLibrary(int);
	virtual void libError(const char *);
	virtual void getLibFonction(int, const std::string &);
	virtual bool checkFileName(const std::string &);
	virtual T	*getSymbol() const;

private:
	HMODULE		lib;
	T	*(*libSymbol)();
};

std::wstring	s2ws(const std::string & s);

template<class T>
WLoader<T>::WLoader()
{
	this->lib = NULL;
}

template<class T>
WLoader<T>::~WLoader()
{}

template<class T>
bool	WLoader<T>::openLibrary(int id, const std::string & libFilename)
{
	if (this->checkFileName(libFilename) == true)
	{
		#ifdef UNICODE
		std::wstring	dll_file = s2ws(libFilename);
		LPCWSTR		tmp = dll_file.c_str();
		#else
		LPCWSTR		tmp = libFilename.c_str();
		#endif
		
		if (this->_libraries.find(id) == this->_libraries.end())
		{
			this->lib = LoadLibrary(tmp);
			if (this->lib == NULL)
			{
				this->libError("openLibrary");
				return false;
			}
			this->_libraries.insert(std::make_pair(id, this->lib));
		}
		return true;
	}
	return false;
}

template<class T>
bool	WLoader<T>::closeLibrary(int id)
{
	std::map<int, HMODULE>::iterator it;
	if ((it = this->_libraries.find(id)) != this->_libraries.end())
	{
		if (FreeLibrary(it->second) == 0)
		{
			this->libError("closeLibrary");
			return false;
		}
		this->_libraries.erase(it);
	}
	return true;
}

template<class T>
void	WLoader<T>::libError(const char *funcName)
{
	std::ostringstream oss;
	std::string err;

	oss << funcName << " : " << GetLastError() << "." << std::endl;
	err = oss.str();
	throw Exception(err.c_str());
}

template<class T>
void	WLoader<T>::getLibFonction(int id, const std::string & symbol)
{
	FARPROC fct;

	if (this->_libraries.find(id) != this->_libraries.end())
	{
		fct = GetProcAddress(this->_libraries.at(id), symbol.c_str());
		this->libSymbol = reinterpret_cast<IModule *(*)()>(fct);
		if (this->libSymbol == NULL)
			this->libError("getLibFonction");
	}
}

template<class T>
T	*WLoader<T>::getSymbol() const
{
	return this->libSymbol();
}

template<class T>
bool	WLoader<T>::checkFileName(const std::string & libFileName)
{
	if (libFileName.substr(libFileName.find_last_of(".") + 1) == "dll")
		return true;
	return false;
}

#endif