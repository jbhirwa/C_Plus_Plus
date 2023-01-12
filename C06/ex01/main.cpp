#include "serialization.hpp"

int main()
{
    Data *after_data;
    Data before_data;
    uintptr_t uintptr_data;
    before_data.x = 9;
    before_data.c = 'c';
    before_data.s = "James";

    std::cout << before_data.x << std::endl;
    std::cout << before_data.c << std::endl;
    std::cout << before_data.s << std::endl;

    uintptr_data = serialize(&before_data);
    after_data = deserialize(uintptr_data);

    std::cout << after_data->x << std::endl;
    std::cout << after_data->c << std::endl;
    std::cout << after_data->s << std::endl;
    return(0);
}