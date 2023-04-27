/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:47:08 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/26 15:31:22 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		Weapon const		getWeapon();
		void				setWeapon(Weapon &weapon);
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif