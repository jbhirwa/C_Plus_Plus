#include "Array.hpp"
#include <iostream>

int main()
{
    srand(time(NULL));

    const int count = 5;

    Array<int> intArr(count);
    for (unsigned int i = 0; i < intArr.size(); i++)
        intArr[i] = rand() % 100 + 1;
   
    Array<std::string> strArr(count);
    strArr[0] = "one";
    strArr[1] = "two";
    strArr[2] = "three";
    strArr[3] = "four";
    strArr[4] = "five";

    Array<int> BintArr(intArr);
    Array<std::string> bStrArr(strArr);

    std::cout << "Before" << std::endl;
    for (unsigned int i = 0; i < BintArr.size(); i++)
        std::cout << BintArr[i] << " ," << BintArr[i] << " ," << strArr[i] << " ," << bStrArr[i] << std::endl;

    for (unsigned int i = 0; i < BintArr.size(); i++)
        BintArr[i] = BintArr[i] * 2;

    for (unsigned int i = 0; i < bStrArr.size(); i++)
        bStrArr[i] = strArr[i].append("_2").data();

    std::cout << "after" << std::endl;
    for (unsigned int i = 0; i < BintArr.size(); i++)
        std::cout << intArr[i] << " ," << BintArr[i] << " ," << strArr[i] << " ," << bStrArr[i] << std::endl;

    Array <int> e;

    try
    {
        std::cout << e[0] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() <<std::endl;
    }
}