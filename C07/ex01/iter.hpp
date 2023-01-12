#include <iostream>
// a const reference to a function is cast to a void function
template<typename T>
void iter(T *arr, int arrSize, void (*f)(const T&))
{
    for (int i = 0; i < arrSize; i++)
        (*f)(arr[i]);
}
template<typename T>
void temp_func(const T &a)
{
    std::cout << a << std::endl;
}