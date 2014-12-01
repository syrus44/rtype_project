#include "WLoader.h"

std::wstring	s2ws(const std::string & s)
{
	int	len;
	int	slen = (int) s.length() + 1;

	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slen, 0, 0);
	wchar_t *buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slen, buf, len);
	std::wstring rbuf(buf);
	delete [] buf;
	return rbuf;
}