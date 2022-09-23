#include "Form.hpp"
#include "Bureaucrat.hpp"


form::form(std::string name) : _name(name)
{
    this->_isSigned = false;
    this->_signableGrade = 1;
    this->_executionableGrade = 1;
}
form::~form()
{
}
form::form(const form &other) : _name(other._name)
{
    this->_isSigned = other._isSigned;
    this->_signableGrade = other._signableGrade;
    this->_executionableGrade = other._executionableGrade;
}
std::string form::getName()
{
    return this->_name;
}
bool form::getIsSigned()
{
    return this->_isSigned;
}
int form::getSignableGrade()
{
    return this->_signableGrade;
}
int form::getExecutionableGrade()
{
    return this->_executionableGrade;
}
void form::beSigned(bureaucrat &_bureaucrat)
{
    if ( _bureaucrat.getGrade() <= this->_signableGrade)
        this->_isSigned = true;
    else
        throw std::invalid_argument("GradeTooLowToSignException");
}
// void form::signForm()
// {
//     if (this->_isSigned == true)
//         std::cout << _bureaucrat.getName() << "signed" << form->getName();
// }
form::form(std::string name, int signableGrade, int executionableGrade) : _name(name), 
_signableGrade(signableGrade), 
_executionableGrade(executionableGrade)
{
    this->_isSigned = false;
}
std::ostream &operator<<(std::ostream &o, form &_form)
{
    o << "form " << _form.getName() << ": ";
    o << "signed: " << std::boolalpha << _form.getIsSigned() << " grade: " << _form.getSignableGrade() << " execution level: " << _form.getExecutionableGrade() << std::endl;
    return o;
}