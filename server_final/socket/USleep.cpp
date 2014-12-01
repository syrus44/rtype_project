#include <unistd.h>
#include "USleep.h"

USleep::USleep(void)
{}

USleep::~USleep(void)
{}

bool	USleep::wait(int millisec) const
{
	if (usleep(millisec * 1000) == -1)
		return (false);
	return (true);
}