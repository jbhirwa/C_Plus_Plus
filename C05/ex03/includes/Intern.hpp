#include <string>
#include "Form.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();

	Form* makeForm(const std::string& formName, const std::string& target) const;
}