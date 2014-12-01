#pragma once
#ifndef WSLEEP_H_
#define WSLEEP_H_

#include "ISleep.h"

class WSleep : public ISleep
{
public:
	WSleep(void);
	~WSleep(void);
	virtual bool	wait(int) const;
};

#endif
