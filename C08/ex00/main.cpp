#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

void printInt(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    std::list<int> list;
	std::vector<int> vector;
    
    for(int i = 0; i < 50; i++)
        vector.push_back(i);   
    try
    {
        std::vector<int>::iterator foundNum = easyfind(vector, 10);
        std::cout << "vector" << std::endl;
        for_each(foundNum, vector.end(), printInt);
    }
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

    for(int i = 0; i < 50; i++)
        list.push_back(i);
    try
    {
        std::list<int>::iterator foundNum = easyfind(list, 12);
        std::cout << "List" <<std::endl;
        for_each(foundNum, list.end(), printInt);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}