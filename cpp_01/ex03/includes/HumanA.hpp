/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:11 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/26 15:22:23 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void				attack();
		const Weapon&		getWeapon() const;
		void				setWeapon(Weapon weapon);
	private:
		std::string _name;
		Weapon& _weapon;
};

#endif