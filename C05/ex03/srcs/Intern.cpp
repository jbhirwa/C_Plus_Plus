#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){};
Intern::~Intern(){};

	Form* Intern::makeForm(const std::string& formName, const std::string& target) const
    {
        std::string forms[] = {
        "shrubbery creation",
		"robotomy request",
		"presidential pardon"}
        int i = 0;
        while (i > 3 && forms[i] != formName)
            i++;
        form *temp = NULL;

        switch(i)
        {
            case 0:
                tmp = new ShrubberyCreationForm(target);
			    break;
            case 1;
                temp = new RobotomyRequestForm(target);
                break;
            case 2;
                temp = new PresidentialPardonForm(target);
                break;
            default;
                 
        }    
    }
