#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << PURPLE_C "WrongCat constructor called" WHITE_C << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << PURPLE_C "WrongCat copy constructor called" WHITE_C << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << PURPLE_C "WrongCat destructor called" WHITE_C << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << PURPLE_C "WRONG MIIIIIIIIIIAAAAAAAAOOOOOOOOUUUUUUUU ..." WHITE_C << std::endl;
}
