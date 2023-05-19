#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm(std::string name, int grade_sign, int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (this->_grade_sign < 1 || this->_grade_exec < 1)
	{
		std::cerr << "Problem with " << _name << " AForm" << std::endl;
		throw GradeTooHighException();
	}
	if (this->_grade_sign > 150 || this->_grade_exec > 150)
	{
		std::cerr << "Problem with " << _name << " AForm" << std::endl;
		throw GradeTooLowException();
	}
	this->_signed = false;
	return;
}

AForm::~AForm()
{
	return;
}

AForm 				&AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

AForm::AForm(const AForm &src) : _name(src._name), _grade_sign(src._grade_sign),_grade_exec(src._grade_exec)
{
	*this = src;
}

const std::string	AForm::getName() const
{
	return (this->_name);
}

int  				AForm::getGradeSign() const
{
	return (this->_grade_sign);
}

int  				AForm::getGradeExec() const
{
	return (this->_grade_exec);
}

bool				AForm::getSigned() const
{
	return (this->_signed);
}

void				AForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->_grade_sign)
		this->_signed = true;
	else
		GradeTooLowException();
}

std::ostream		&operator<<(std::ostream& out_stream, const AForm &src)
{
	return (out_stream << src.getName() << " Form required grade "
		<< src.getGradeSign() << " to be signed and grade "
		<< src.getGradeExec() << " to be executed ");
}