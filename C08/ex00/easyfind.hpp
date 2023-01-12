#include <iostream>
#include <algorithm>

class indexNotFound : public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("Index not found");
        }
};

template<class T>
typename T::iterator easyfind(T &container, int tofind)
{
    typename T::iterator foundIt = std::find(container.begin(), container.end(), tofind);
    if (foundIt != container.end())
        return foundIt;
    else
        throw indexNotFound();
}