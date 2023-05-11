/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:38 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/09 14:08:09 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main( void )
{
	ClapTrap Morgan("Morgan");
	ClapTrap Big_licorne("Big licorne");
	ScavTrap Tiny_blue_licorne("Tiny blue licorne");
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
	Tiny_blue_licorne.guardGate();
	return (0);
}

