#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << BLUE_C "Animal constructor called" WHITE_C << std::endl;
}

Animal::~Animal()
{
	std::cout << BLUE_C "Animal destructor called" WHITE_C << std::endl;
}

Animal::Animal(Animal &src)
{
	std::cout << BLUE_C "Animal copy constructor called" WHITE_C << std::endl;
	*this = src;
}

std::string Animal::getType () const
{
	return (this->_type);
}

Animal &Animal::operator=(const Animal &rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << BLUE_C "Animal make a weird sound ..." WHITE_C << std::endl;
}