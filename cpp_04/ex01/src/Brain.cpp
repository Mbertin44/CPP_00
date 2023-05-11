#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << CYAN_C "Brain constructor called" WHITE_C << std::endl;
}

Brain::~Brain()
{
	std::cout << CYAN_C "Brain destructor called" WHITE_C << std::endl;
}

Brain::Brain(Brain &src)
{
	std::cout << CYAN_C "Brain copy constructor called" WHITE_C << std::endl;
	*this = src;
}

std::string Brain::getType () const
{
	return (this->_type);
}

Brain &Brain::operator=(const Brain &rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void Brain::makeSound() const
{
	std::cout << CYAN_C "Brain make a weird sound ..." WHITE_C << std::endl;
}