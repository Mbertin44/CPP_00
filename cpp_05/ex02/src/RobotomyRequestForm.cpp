#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

void					RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	if (this->getSigned() == false)
		throw UnsignedForm();
	else if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	else
	{
		if (rand() % 2 == 0)
		{
			system("afplay perceuse.mp3");
			std::cout << GREEN_C << executor.getName() << " have been robotomized" WHITE_C << std::endl;
		}
		else
			std::cout << RED_C << executor.getName() << " can't be robotomized" WHITE_C << std::endl;
	}
}

