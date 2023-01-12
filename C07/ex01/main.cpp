#include "iter.hpp"
#include <string>

int main()
{
    std::string strArr[] = {"beans", "Hello", "mr."};
    ::iter(strArr, 3, temp_func<std::string>);

    int intArr[] = {1, 3, 5};
    iter(intArr, 3, temp_func<int>);
    
    iter(intArr, 3, temp_func);
}