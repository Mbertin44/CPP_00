#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern &src);
        Intern   &operator=(const Intern &rhs);
    private:
        /* data */
};

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

#endif // INTERN_HPP