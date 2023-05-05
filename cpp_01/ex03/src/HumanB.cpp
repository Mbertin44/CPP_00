/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:15:38 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/05 09:14:29 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
	return;
}

HumanB::~HumanB()
{
	return;
}

Weapon const&	HumanB::getWeapon()
{
	return (*_weapon);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " attacks with nothing ... " << _name << " will die" <<  std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
