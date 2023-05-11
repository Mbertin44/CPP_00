/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:38 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/11 11:26:11 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main( void )
{
	ClapTrap Morgan("Morgan");
	ClapTrap Big_licorne("fucking dragon");
	ScavTrap Tiny_blue_licorne("Tiny blue licorne");
	FragTrap Tiny_pink_licorne("Tiny pink licorne");
	for (int i = -1; i != 10; ++i)
	{
		Big_licorne.attack("Morgan");
		if (Big_licorne.getEnergyPoint() != 0)
		{
			Morgan.takeDamage(Big_licorne.getAttackDamage());
			Morgan.beRepaired(Big_licorne.getAttackDamage());
		}
	}
	for (int i = -1; i != 10; ++i)
	{
		Tiny_blue_licorne.attack("Morgan");
		if (Tiny_blue_licorne.getEnergyPoint() != 0)
		{
			Morgan.takeDamage(Tiny_blue_licorne.getAttackDamage());
			Morgan.beRepaired(Tiny_blue_licorne.getAttackDamage());
		}
	}
	for (int i = -1; i != 10; ++i)
	{
		Tiny_pink_licorne.attack("Morgan");
		if (Tiny_pink_licorne.getEnergyPoint() != 0)
		{
			Morgan.takeDamage(Tiny_pink_licorne.getAttackDamage());
			Morgan.beRepaired(Tiny_pink_licorne.getAttackDamage());
		}
	}
	Tiny_blue_licorne.guardGate();
	Tiny_pink_licorne.highFivesGuys();
	return (0);
}

