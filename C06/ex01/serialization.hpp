#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>

struct Data
{
    int         x;
    char        c;
    std::string s;
};


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif