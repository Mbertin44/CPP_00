#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor is called" << std::endl;
	return ;
}

Intern::~Intern()
{
	std::cout << "Intern destructor is called" << std::endl;
	return ;
}

Intern   &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::Intern(Intern &src)
{
	*this = src;
}

AForm	*Intern::makeform(std::string form_type, std::string form_name)
{
	std::string const forms[3] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};

	int i = -1;
	for (; i < 3; ++i)
	{
		if(forms[i].compare(form_type) == 0)
			break;
	}
	switch (i)
	{
		case 0:
		{
			std::cout << GREEN_C "Inter creates " << form_type << WHITE_C << std::endl;
			return(new PresidentialPardonForm(form_name));
		}
		case 1:
		{
			std::cout << GREEN_C "Inter creates " << form_type << WHITE_C << std::endl;
			return(new ShrubberyCreationForm(form_name));
		}
		case 2:
		{
			std::cout << GREEN_C "Inter creates " << form_type << WHITE_C << std::endl;
			return(new RobotomyRequestForm(form_name));
		}
		default:
			std::cerr << RED_C "The intern is lost ... what kind of form is that ?" WHITE_C << std::endl;
			return(NULL);
	}
	return (NULL);
}
