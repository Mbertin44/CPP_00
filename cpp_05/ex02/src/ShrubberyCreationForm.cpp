#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

void					ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	if (this->getSigned() == false)
		throw UnsignedForm();
	else if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	else
	{
		std::ofstream output;
		output.open(this->getName() + "_shrubbery");
		if (output.is_open() == false)
		{
			std::cerr << RED_C "Error. Can't create " << this->getName() + "_shrubbery" << "file" WHITE_C << std::endl;
			return ;
		}
		else
		{
			output << "arbre" << std::endl;
			output.close();
		}
	}
}

