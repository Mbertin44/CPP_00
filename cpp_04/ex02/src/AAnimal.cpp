#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << BLUE_C "AAnimal constructor called" WHITE_C << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << BLUE_C "AAnimal destructor called" WHITE_C << std::endl;
}

AAnimal::AAnimal(AAnimal &src)
{
	std::cout << BLUE_C "AAnimal copy constructor called" WHITE_C << std::endl;
	*this = src;
}

std::string AAnimal::getType () const
{
	return (this->_type);
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

// void AAnimal::makeSound() const
// {
// 	std::cout << BLUE_C "AAnimal make a weird sound ..." WHITE_C << std::endl;
// }