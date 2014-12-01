#ifndef ULOADER_H
#define ULOADER_H

#include "ILoader.h"

template<class T>
class ULoader : public ILoader<T>
{
	std::map<int, void *>		_libraries;
public:
	ULoader();
	virtual ~ULoader();
	virtual bool openLibrary(int, const std::string &);
	virtual bool closeLibrary(int);
	virtual void libError(const char *);
	virtual void getLibFonction(int, const std::string &);
	virtual bool checkFileName(const std::string &);
	virtual T	*getSymbol() const;

private:
	void	*lib;
	T *(*libSymbol)();
};

template<class T>
ULoader<T>::ULoader()
{
	this->lib = NULL;
}

template<class T>
ULoader<T>::~ULoader()
{}

template<class T>
bool	ULoader<T>::openLibrary(int id, const std::string & libFilename)
{
	if (this->checkFileName(libFilename) == true)
	{
		if (this->_libraries.find(id) == this->_libraries.end())
		{
			this->lib = dlopen(libFilename.c_str(), RTLD_LAZY);
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
bool	ULoader<T>::closeLibrary(int id)
{
	std::map<int, void *>::iterator it;
	if ((it = this->_libraries.find(id)) != this->_libraries.end())
	{
		if (dlclose(it->second) != 0)
		{
			this->libError("closeLibrary");
			return false;
		}
		this->_libraries.erase(it);
	}
	return true;
}

template<class T>
void	ULoader<T>::libError(const char *funcName)
{
	std::ostringstream oss;
	std::string err;
	char *error = dlerror();
	
	oss << funcName << " : " << error << ".";
	err = oss.str();
	throw Exception(err.c_str());
}

template<class T>
void	ULoader<T>::getLibFonction(int id, const std::string & symbol)
{
	void *lib;

	if (this->_libraries.find(id) != this->_libraries.end())
	{
		lib = dlsym(this->lib, symbol.c_str());
		if (lib == NULL)
			this->libError("getLibFonction");
		this->libSymbol = reinterpret_cast<T *(*)()>(lib);
	}
}

template<class T>
T	*ULoader<T>::getSymbol() const
{
	return (this->libSymbol());
}

template<class T>
bool	ULoader<T>::checkFileName(const std::string & libFileName)
{
	if (libFileName.substr(libFileName.find_last_of(".") + 1) == "so")
		return true;
	return false;
}

#endif
