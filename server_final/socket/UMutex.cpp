#include <stdlib.h>
#include "UMutex.h"

// TODO : encapsuler le exit pendant le merge
UMutex::UMutex()
{
	if (pthread_mutex_init(&(this->mutex), NULL) != 0)
	{
		std::cerr << "couldn't initialize mutex" << std::endl;
		exit (-1);
	}
}

void	UMutex::lock()
{
	if (pthread_mutex_lock(&(this->mutex)) != 0)
	{
		std::cerr << "couldn't lock the mutex" << std::endl;
		exit (-1);
	}
}

void	UMutex::unlock()
{
	if (pthread_mutex_unlock(&(this->mutex)) != 0)
	{
		std::cerr << "couldn't unlock the mutex" << std::endl;
		exit (-1);
	}
}

UMutex::~UMutex()
{
	if (pthread_mutex_destroy(&(this->mutex)) != 0)
	{
		std::cerr << "couldn't destroy the mutex" << std::endl;
		exit (-1);
	}
}
