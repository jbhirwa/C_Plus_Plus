#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
# include <iostream>
# include <string>
class bureaucrat
{
    public:
        bureaucrat();
        ~bureaucrat();
        bureaucrat(std::string const name, int grade);
        bureaucrat(const bureaucrat &other);
        //bureaucrat &operator=(const bureaucrat &rhs);
        std::string getName();
        int         getGrade();
        void        incrementGrade();
        void        decrementGrade();
    private:
        std::string _name;
        int _grade;
};
std::ostream &operator<<(std::ostream &o, bureaucrat &_bureaucrat);


#endif