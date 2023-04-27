/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:37 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/26 10:51:34 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string type)
{
	_type = type;
	return;
}

Weapon::~Weapon()
{
	return;
}

std::string const	&Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}