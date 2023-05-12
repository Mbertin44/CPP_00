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