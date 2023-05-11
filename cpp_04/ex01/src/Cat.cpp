#include "../includes/Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << RED_C "Cat constructor called" WHITE_C << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << RED_C "Cat copy constructor called" WHITE_C << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << RED_C "Cat destructor called" WHITE_C << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

// const std::string &Cat::getType () const
// {
// 	return (this->_type);
// }

void Cat::makeSound() const
{
	std::cout << RED_C "MIIIIIIIIIIAAAAAAAAOOOOOOOOUUUUUUUU ..." WHITE_C << std::endl;
}
