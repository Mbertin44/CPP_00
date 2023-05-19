#include "../includes/Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (this->_grade_sign < 1 || this->_grade_exec < 1)
	{
		std::cerr << "Problem with " << _name << " Form" << std::endl;
		throw GradeTooHighException();
	}
	if (this->_grade_sign > 150 || this->_grade_exec > 150)
	{
		std::cerr << "Problem with " << _name << " Form" << std::endl;
		throw GradeTooLowException();
	}
	this->_signed = false;
	return;
}

Form::~Form()
{
	return;
}

Form 				&Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

Form::Form(const Form &src) : _name(src._name), _grade_sign(src._grade_sign),_grade_exec(src._grade_exec)
{
	*this = src;
}

const std::string	Form::getName() const
{
	return (this->_name);
}

int  				Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int  				Form::getGradeExec() const
{
	return (this->_grade_exec);
}

bool				Form::getSigned() const
{
	return (this->_signed);
}

void				Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->_grade_sign)
		this->_signed = true;
	else
		GradeTooLowException();
}

std::ostream		&operator<<(std::ostream& out_stream, const Form &src)
{
	return (out_stream << src.getName() << " form required grade "
		<< src.getGradeSign() << " to be signed and grade "
		<< src.getGradeExec() << " to be executed ");
}