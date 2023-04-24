/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:19:22 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/24 13:32:42 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		const std::string	&get_name() const;
		void				set_name(std::string name);
		void				announce();
	private:
		std::string const _name;
};
