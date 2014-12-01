#include "LoadMap.h"
#include "Exception.h"

int		main(int ac, char **av)
{

	try	
	{
		if (ac == 2)
		{
			LoadMap m(av[1]);
			m.initLevel();
		}
		else
			throw Exception("Invalid number of arguments");
	}
	catch (const Exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
				system("pause");
	}
	return (0);
}