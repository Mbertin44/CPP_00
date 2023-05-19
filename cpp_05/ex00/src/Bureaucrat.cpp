#include "../includes/Bureaucrat.hpp"
#include "../includes/GradeTooHighException.hpp"
#include "../includes/GradeTooLowException.hpp"

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
	std::cout << this->getName() << " is now grade " << this->getGrade() << std::endl;
}

void				Bureaucrat::Downgrade()
{
	std::cout << this->getName() << " is asking for a degradation (wtf) ..." << std::endl;
	if (this->_grade == 150)
		throw GradeTooHighException();
	this->_grade++;
	std::cout << this->getName() << " is now grade " << this->getGrade() << std::endl;
}
std::ostream		&operator<<(std::ostream& out_stream, const Bureaucrat &src)
{
	return (out_stream << src.getName() << " bureaucrat grade " << src.getGrade());
}