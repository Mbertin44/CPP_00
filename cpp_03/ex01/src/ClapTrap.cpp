/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:23:06 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/11 11:03:24 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

// ---------------------------- FONCTION CANONIQUE ----------------------------
ClapTrap::ClapTrap()
{
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Constructor called" << std::endl;
	this->_attack_damage = 0;
	this->_energy_points = 10;
	this->_hit_points = 10;
	return;
}

ClapTrap::ClapTrap(ClapTrap &source)
{
	*this = source;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage= rhs._attack_damage;
	return (*this);
}

//------------------------------------ GET ------------------------------------

const int	&ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}

const int	&ClapTrap::getEnergyPoint() const
{
	return (this->_energy_points);
}

//------------------------------ FONCTIONS MEMBRE ------------------------------

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points == 0)
	{
		std::cout << YELLOW_CL "ClapTrap " << this->_name << " don't have enought energy point to attack" WHITE_CL << std::endl << std::endl;
		return ;
	}
	std::cout << PINK_CL "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage" WHITE_CL << std::endl << std::endl;
	this->_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << this->_name << " is already dead ... YOU MONSTER" << std::endl;
		return ;
	}
	std::cout << RED_CL "ClapTrap " << this->_name << " take " << amount << " point of damage" WHITE_CL << std::endl << std::endl;
	this->_hit_points -= amount;
	if (this->_hit_points <= 0)
		std::cout << this->_name << RED_CL " is dead ..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
	{
		std::cout << YELLOW_CL "ClapTrap " << this->_name << " don't have enought energy point to repair himself" WHITE_CL << std::endl << std::endl;
		return ;
	}
	std::cout << GREEN_CL "ClapTrap " << this->_name << " repair " << amount << " point of hit point" WHITE_CL << std::endl << std::endl;
	this->_hit_points += amount;
	this->_energy_points -= 1;
}