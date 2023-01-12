#include "span.hpp"

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

int main()
{
        span spanList = span(5);

        spanList.addNumber(6);
        spanList.addNumber(3);
        spanList.addNumber(17);
        spanList.addNumber(9);
        spanList.addNumber(11);
        std::cout << "longest" << spanList.longestSpan() << std::endl;
        std::cout << "shortest" << spanList.shortestSpan() << std::endl;
        try
        {
                std::list<int>    longList( 10 );
                std::srand( time ( NULL ) );
                std::generate( longList.begin(), longList.end(), std::rand);
                
                span sp( longList.size() );
                sp.addNumber( longList.begin(), longList.end() );
                std::cout << "longest " << sp.longestSpan() << std::endl;
                std::cout << "shortest " << sp.shortestSpan() << std::endl;

                                
                std::copy(std::begin(sp._list), std::end(sp._list),
                std::ostream_iterator<int>(std::cout, " "));
        }
        catch(std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }
        return 0;
}