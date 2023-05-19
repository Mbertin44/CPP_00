/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:31:08 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/12 11:08:41 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << GREEN_C "Dog constructor called" WHITE_C << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "My brain adress is " << this->_brain << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << GREEN_C "Dog copy constructor called" WHITE_C << std::endl;
	this->_brain = new Brain(*src._brain);
}

// Dog::Dog (const Dog& other) : Animal(other), m_dogBrain(new Brain(*other.m_dogBrain)) {
// 	std::cout << YEL "Copydog" NC << std::endl;
// 	*this = other ;
// 	return ;
// }


Dog::~Dog()
{
	delete this->_brain;
	std::cout << GREEN_C "Dog destructor called" WHITE_C << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*this->_brain = *rhs._brain;
	}
	return (*this);
}

Brain *Dog::getBrain()
{
	return (this->_brain);
}


void Dog::makeSound() const
{
	std::cout << GREEN_C "WOUAF WOUAF WOUAF AOUUUUUUUUUUH ..." WHITE_C << std::endl;
}
