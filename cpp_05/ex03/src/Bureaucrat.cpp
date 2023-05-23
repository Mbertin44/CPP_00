#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

Bureaucrat::Bureaucrat (std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}
Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
	*this = src;
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

Bureaucrat			&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

void				Bureaucrat::Upgrade()
{
	std::cout << this->getName() << " is asking for a promotion ..." << std::endl;
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
	std::cout << GREEN_C << this->getName() << " is now grade " << this->getGrade() << WHITE_C << std::endl;
}

void				Bureaucrat::Downgrade()
{
	std::cout << this->getName() << " is asking for a degradation (wtf) ..." << std::endl;
	if (this->_grade == 150)
		throw GradeTooHighException();
	this->_grade++;
	std::cout << GREEN_C << this->getName() << " is now grade " << this->getGrade() << WHITE_C << std::endl;
}

void				Bureaucrat::signForm(AForm &src)
{
	src.beSigned(*this);
	if (src.getSigned() == true)
		std::cout << GREEN_C << this->_name << " signed " << src.getName() << WHITE_C << std::endl;
	else if (src.getSigned() == false)
		std::cout << RED_C << this->_name << " could't sign " << src.getName() << " because he's grade is too low to sign" WHITE_C << std::endl;
}

std::ostream		&operator<<(std::ostream& out_stream, const Bureaucrat &src)
{
	return (out_stream << src.getName() << " bureaucrat grade " << src.getGrade());
}