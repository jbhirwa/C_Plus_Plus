#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class bureaucrat;

class form
{
    public:
        //form();
        form(std::string name);
        ~form();
        form(const form &other);
        form(std::string name, int signableGrade, int executionableGrade);
        std::string getName();
        bool        getIsSigned();
        int         getSignableGrade();
        int         getExecutionableGrade();
        form &operator=(const form &rhs);
        void        beSigned(bureaucrat &_bureaucrat);

    private:
        std::string const   _name;
        bool                _isSigned;
        int                 _signableGrade;
        int                 _executionableGrade;
};
std::ostream &operator<<(std::ostream &o, form &_form);

#endif