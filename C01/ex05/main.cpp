#include "Harl.hpp"

int main()
{
        harl_levels *levels = new harl_levels;

    std::cout << "DEBUG \n\n";
    levels->complain("DEBUG");

    std::cout << "INFO \n\n";
    levels->complain("INFO");

    std::cout << "WARNING \n\n";
    levels->complain("WARNING");
    std::cout << "ERROR \n\n";
    levels->complain("ERROR");
    return (0);
}