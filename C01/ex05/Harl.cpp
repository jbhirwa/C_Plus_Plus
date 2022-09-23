#include "Harl.hpp"

harl_levels::harl_levels(){};
harl_levels::~harl_levels(){};
void    harl_levels::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!";
    std::cout << std::endl;
}
void    harl_levels::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << std::endl;
}
void    harl_levels::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << std::endl;}
void    harl_levels::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void    harl_levels::complain(std::string level)
{
    int selection;
    std::string levels_arr[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
     for (int i = 0; i < 4; i++)
        if (levels_arr[i] == level)
                selection = i;
    switch(selection)
    {
        case 0:
            harl_levels::debug();
            break;
        case 1:
            harl_levels::info();
            break;
         case 2:
             harl_levels::warning();
             break ;
         case 3:
             harl_levels::error();
             break ;
    }
}

/*
void    harl_levels::complain(std::string level)
{
    std::string levels_arr[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
    void (harl_levels::*func_arr[4])() = {
        &harl_levels::debug,
        &harl_levels::info,
        &harl_levels::warning,
        &harl_levels::error
    };
     for (int i = 0; i < 4; i++)
        if (levels_arr[i] == level)
                (this->*func_arr[i])();
}
*/
/*
MyClass* myClass = new MyClass();
    myClass->MyField = "Hello world!";
*/
