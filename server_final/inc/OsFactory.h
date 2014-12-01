#pragma once
#ifdef WIN32
	#include "WSocket.h"
	#include "WSleep.h"
	#include "WThread.h"
	#include "WCriticalSection.h"
	#include "WLoader.h"
#else
	#include "USocket.h"
	#include "USleep.h"
	#include "Uthread.h"
	#include "UMutex.h"
	#include "ULoader.h"
#endif

#include "IModule.h"

class OsFactory
{
public:
	static ISocket*	Socket();
	static ISocket*	CustomSocket(std::string const &, int);
	static ISleep*	Sleep();
	static IThreads* Thread();
	static IMutex*	Mutex();
	static ILoader<IModule>*	Loader();
	static bool openLib(std::string const &, int, ILoader<IModule> *il);
	static IModule*	Module(int, ILoader<IModule>*);
};

