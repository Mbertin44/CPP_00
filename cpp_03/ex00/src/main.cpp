/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:38 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/09 14:07:28 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main( void )
{
	ClapTrap Morgan("Morgan");
	ClapTrap Big_licorne("Big licorne");
	for (int i = -1; i != 10; ++i)
	{
		Morgan.attack("a Big licorne");
		if (Morgan.getEnergyPoint() != 0)
		{
			Big_licorne.takeDamage(Morgan.getAttackDamage());
			Big_licorne.beRepaired(Morgan.getAttackDamage());
		}
	}
	Big_licorne.attack("Morgan");
	Big_licorne.attack("Morgan");
	return (0);
}

