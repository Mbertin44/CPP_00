#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << CYAN_C "Brain constructor called" WHITE_C << std::endl;
	std::cout << "Listen to me ! I have 5 GREAT ideas !!" << std::endl;
	for (size_t i = 0; i < 5; i++)
		std::cout << "DUMB IDEA " << i + 1 << std::endl;
}

Brain::~Brain()
{
	std::cout << CYAN_C "Brain destructor called" WHITE_C << std::endl;
}

Brain::Brain(Brain &src)
{
	std::cout << CYAN_C "Brain copy constructor called" WHITE_C << std::endl;
	*this = src;
	std::cout << "Listen to me ! I have 5 GREAT ideas !!" << std::endl;
	for (size_t i = 0; i < 5; i++)
		std::cout << "DUMB IDEA " << i + 1 << std::endl;
}

Brain &Brain::operator=(Brain &rhs)
{
	if(this != &rhs)
	{
		for (size_t i = 0; i < 100; ++i)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void Brain::blabla()
{
	std::cout << "coco" << std::endl;
}