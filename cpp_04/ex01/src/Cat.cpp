#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << RED_C "Cat constructor called" WHITE_C << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "My brain adress is " << this->_brain << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << RED_C "Cat copy constructor called" WHITE_C << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << RED_C "Cat destructor called" WHITE_C << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain();
	}
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
