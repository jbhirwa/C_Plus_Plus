#include <iostream>

int main(void)
{
    std::string     LitStr;
    std::string     *stringPTR;
    std::string     &stringREF = LitStr;

    LitStr = "HI THIS IS BRAIN";
    stringPTR = &LitStr;

    std::cout << &LitStr << "... " << stringPTR << "... " << &stringREF << std::endl; 
    std::cout << LitStr << "... " << *stringPTR << "... " << stringREF << std::endl;
}