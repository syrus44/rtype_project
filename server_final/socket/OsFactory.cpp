#include "OsFactory.h"
#include "Exception.h"

ISocket	*	OsFactory::Socket()
{
	ISocket *s = 0;
	#ifdef WIN32
		s = new WSocket();
	#else
		s = new USocket();
	#endif
	return (s);
}

ISocket *	OsFactory::CustomSocket(std::string const &addr, int port)
{
	ISocket		*s = 0;

	#ifdef WIN32
		s = new WSocket(addr, port);
	#else
		s = new USocket(addr, port);
	#endif
	return (s);
}

ISleep *	OsFactory::Sleep()
{
	ISleep *w = 0;
	#ifdef WIN32
		w = new WSleep();
	#else
		w = new USleep();
	#endif
	return (w);
}

IThreads *	OsFactory::Thread()
{
	IThreads	*t = 0;

	#ifdef WIN32
		t = new WThread();
	#else
		t = new UThread();
	#endif
	return (t);
}

IMutex *	OsFactory::Mutex()
{
	IMutex	*m = 0;

	#ifdef WIN32
		m = new WCriticalSection();
	#else
		m = new UMutex();
	#endif
	return (m);
}

ILoader<IModule>*	OsFactory::Loader()
{
	ILoader<IModule>		*l = 0;
	#ifdef WIN32
		l = new WLoader<IModule>;
	#else
		l = new ULoader<IModule>;
	#endif
	return (l);
}

bool					OsFactory::openLib(std::string const &libName, int id, ILoader<IModule> *il)
{
	std::string lib = libName;
	if (lib.substr(lib.find_last_of(".") + 1) != "dll" || lib.substr(lib.find_last_of(".") + 1) != "so")
	{
		#ifdef WIN32
			lib.append(".dll");
		#else
			lib.append(".so");
			lib = "./" + lib;
		#endif
		
		if (il->openLibrary(id, lib) == true)
			return (true);
		throw Exception("Can't open this library ! Must be corrupted ...");
	}
	throw Exception("The library provided must be a DLL (Dynamic Linked Library) or a SO (Shared Library) file !");
	return (false);
}

IModule*				OsFactory::Module(int id, ILoader<IModule> *il)
{
	IModule *mod = 0;

	il->getLibFonction(id, "getInstanceFromDll");
	mod = il->getSymbol();
	return (mod);
}
