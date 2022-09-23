#include "Bureaucrat.hpp"

bureaucrat::bureaucrat()
{
    this->_name = "Default Bureaucrat Name";
    this->_grade = 150;
}
bureaucrat::~bureaucrat()
{
}
bureaucrat::bureaucrat(const bureaucrat &other)
{
    this->_name = other._name;
    this->_grade = other._grade;
}
bureaucrat::bureaucrat(std::string const name, int grade) : _name(name)
{
    if (grade > 150)
        throw std::invalid_argument("GradeTooLowException");
    else if (grade < 0)
        throw std::invalid_argument("GradeTooHighOrEqualToOneException");
    else
        this->_grade = grade;

}
std::ostream &operator<<(std::ostream &o, bureaucrat &_bureaucrat)
{
    o << _bureaucrat.getName() << ", bureaucrat grade " << _bureaucrat.getGrade();
    return o;
}
std::string bureaucrat::getName()
{
    return this->_name;
}
int         bureaucrat::getGrade()
{
    return this->_grade;
}
void        bureaucrat::incrementGrade()
{
    if (this->_grade >1)
        this->_grade--;
    else
        throw std::invalid_argument("GradeTooHighOrEqualToOneException");
}
void        bureaucrat::decrementGrade()
{
    if (this->_grade < 150)
        this->_grade++;
    else
        throw std::invalid_argument("GradeTooLowException");
}