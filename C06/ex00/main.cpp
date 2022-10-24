#include <iostream>
#include <string>
#include "converttypes.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			convertType mhmmm(argv[1]);
			std::cout << mhmmm;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Usage: ./convert <value>" << std::endl;
}