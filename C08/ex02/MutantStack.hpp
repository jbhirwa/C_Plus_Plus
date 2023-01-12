#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>

template<typename T, typename container = std::deque<T> >
class mutantStack: public std::stack<T, container>
{
    public:
        mutantStack(){}
        mutantStack(mutantStack<T, container> const &other){
            *this = other;
        }
        ~mutantStack(){}
        mutantStack<T> &operator=(mutantStack<T, container> const &rhs) {
            *this = rhs;
            return(*this);
        }

        typedef typename container::iterator iterator;
        typedef typename container::iterator reverse_iterator;

        iterator begin(){
            return(this->c.begin());
        }
        iterator end(){
            return(this->c.end());
        }
        reverse_iterator rbegin(){
            return(this->c.rbegin());
        }
        reverse_iterator rend(){
            return(this->c.rend());
        }
};

#endif