/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:12:30 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/24 13:24:09 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(){return;}

Zombie::~Zombie(){return;}

const std::string	&Zombie::get_name() const
{
	return (_name);
}

void				Zombie::set_name(std::string newName)
{
	_name = newName;
}

void				Zombie::announce()
{
	std::cout << _name << ": : BraiiiiiiinnnzzzZ..." << std::endl;
}