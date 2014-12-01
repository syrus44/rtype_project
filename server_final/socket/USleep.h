#ifndef USLEEP_H_
#define USLEEP_H_

#include "ISleep.h"

class USleep : public ISleep
{
public:
	USleep(void);
	~USleep(void);
	virtual bool	wait(int) const;
};

#endif