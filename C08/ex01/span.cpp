#include "span.hpp"

span::span(unsigned int n) : _n(n)
{
}

span::span(const span &other)
{
    *this = other;
}

span::~span()
{
}

span &span::operator=(const span &rhs)
{
    if (this != &rhs) 
    {
        this->_list = rhs._list;
        this->_n = rhs._n;
    }
    return *this;
}

void span::addNumber(int n)
{
    if (_list.size() > _n)
        throw std::out_of_range("List is full");
    else
        _list.push_back(n);
}

void span::addNumber( std::list<int>::const_iterator itBegin, std::list<int>::const_iterator itEnd ) {
    if ( _list.size() > _n )
        throw std::out_of_range("Span::addNumber: list is full");
    _list.insert( _list.end(), itBegin, itEnd );
}


unsigned int span::longestSpan() const
{
    std::list<int> temp;

    int (*iabs)(int) = &std::abs;
    if(this->_list.size() <= 1)
        throw std::out_of_range("Empty");
    std::adjacent_difference(this->_list.begin(), this->_list.end(), std::back_inserter(temp));
    std::transform(temp.begin(), temp.end(), temp.begin(), iabs);
    return *max_element(temp.begin(), temp.end());
}

unsigned int span::shortestSpan() const
{
    std::list<int> temp;

    int (*iabs)(int) = &std::abs;
    if(this->_list.size() <= 1)
        throw std::out_of_range("Empty");
    //compares two numbers
    //result requires a pointer to the initial address of the array 
    //where the difference will be stored... back_inserter returns an iterator(pointer to temp)
    std::adjacent_difference(this->_list.begin(), this->_list.end(), std::back_inserter(temp));
    //applies iabs between teh ranges in begin and end... stored in second temp_begin
    //gets rid of the negative number
    std::transform(temp.begin(), temp.end(), temp.begin(), iabs);
    return *min_element(temp.begin(), temp.end());
}
//https://github.com/achrafelkhnissi/CPP_Modules/blob/master/Module_08/ex01/span.cpp