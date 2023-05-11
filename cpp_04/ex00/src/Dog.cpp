/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:31:08 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/11 11:50:08 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << GREEN_C "Dog constructor called" WHITE_C << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << GREEN_C "Dog copy constructor called" WHITE_C << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << GREEN_C "Dog destructor called" WHITE_C << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

// const std::string &Dog::getType () const
// {
// 	return (this->_type);
// }

void Dog::makeSound() const
{
	std::cout << GREEN_C "WOUAF WOUAF WOUAF AOUUUUUUUUUUH ..." WHITE_C << std::endl;
}
