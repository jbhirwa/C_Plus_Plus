#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class harl_levels
{
    private:    
        void    debug();
        void    info();
        void    warning();
        void    error();
    public:
        void    complain( std::string level ); 
        harl_levels();
        ~harl_levels(); 
};
#endif