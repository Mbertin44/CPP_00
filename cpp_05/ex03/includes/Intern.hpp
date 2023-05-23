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
};

#endif // INTERN_HPP