#ifndef INTERN_HPP
# define INTERN_HPP

#include "../includes/AForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern &src);
		Intern	&operator=(const Intern &rhs);
		AForm	*makeform(std::string form_name, std::string form_target);
};

#endif // INTERN_HPP