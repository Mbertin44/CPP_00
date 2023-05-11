/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:45:39 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/11 15:57:47 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Brain
{
	public:
		Brain();
		Brain(Brain &src);
		Brain &operator=(Brain rhs);
		~Brain();
	private:
		std::string ideas[100];
};

#endif // BRAIN_HPP