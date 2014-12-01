#ifndef ISLEEP_H_
#define ISLEEP_H_

class	ISleep
{
public:
	ISleep() {};
	virtual ~ISleep() {};
	virtual bool wait(int) const = 0;
};

#endif
