#include <Windows.h>
#include <iostream>
#include "WSleep.h"

WSleep::WSleep(void)
{}


WSleep::~WSleep(void)
{}

bool	WSleep::wait(int millisec) const
{
	Sleep(millisec);
	return (true);
}
