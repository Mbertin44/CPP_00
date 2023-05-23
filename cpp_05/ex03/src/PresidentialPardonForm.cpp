#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

void					PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (this->getSigned() == false)
		throw UnsignedForm();
	else if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	else
	{
		std::cout << GREEN_C << executor.getName() << " is now forgiven by Zaphod Beeblebrox." WHITE_C << std::endl;
	}
}

