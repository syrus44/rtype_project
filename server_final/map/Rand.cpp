#include <cstdlib>
#include "Rand.h"

Rand::Rand(void)
{}


Rand::~Rand(void)
{}

int	Rand::getRand(int n) const
{
	return (rand() % n);
}
