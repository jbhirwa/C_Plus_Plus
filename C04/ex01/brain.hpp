#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class brain
{
    public:
        brain();
        brain(const brain &other);
        brain& operator=(const brain &rhs);
        ~brain();
        const std::string &getthought(int index) const;
    private:
        std::string ideas[100];
};

#endif