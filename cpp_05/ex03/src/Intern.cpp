#include "../includes/Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor is called" << std::endl;
    return ;
}

Intern::~Intern()
{
    std::cout << "Intern constructor is called" << std::endl;
    return ;
}

Intern   &Intern::operator=(const Intern &rhs)
{
    return (*this);
}

Intern::Intern(Intern &src)
{
    *this = src;
}