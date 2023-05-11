#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << DARK_GRAY_C "WrongAnimal constructor called" WHITE_C << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << DARK_GRAY_C "WrongAnimal destructor called" WHITE_C << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &src)
{
	std::cout << DARK_GRAY_C "WrongAnimal copy constructor called" WHITE_C << std::endl;
	*this = src;
}

std::string WrongAnimal::getType () const
{
	return (this->_type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << DARK_GRAY_C "WrongAnimal make a REALLY weird sound ..." WHITE_C << std::endl;
}