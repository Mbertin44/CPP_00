/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:38 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/09 13:52:29 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main( void )
{
	ClapTrap Morgan("Morgan");
	ClapTrap Dragon("fucking dragon");
	ScavTrap Tiny_dragon("Tiny dragon");
	FragTrap Broken_dragon("FUCK UP DRAGON");
	for (int i = -1; i != 10; ++i)
	{
		Tiny_dragon.attack("Morgan");
		if (Tiny_dragon.getEnergyPoint() != 0)
		{
			Morgan.takeDamage(Tiny_dragon.getAttackDamage());
			Morgan.beRepaired(Tiny_dragon.getAttackDamage());
		}
	}
	for (int i = -1; i != 10; ++i)
	{
		Dragon.attack("Morgan");
		if (Dragon.getEnergyPoint() != 0)
		{
			Morgan.takeDamage(Dragon.getAttackDamage());
			Morgan.beRepaired(Dragon.getAttackDamage());
		}
	}
	Tiny_dragon.guardGate();
	return (0);
}

