/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:45:39 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/15 09:20:30 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"

class Brain
{
	public:
		Brain();
		Brain(Brain &src);
		Brain &operator=(Brain &rhs);
		~Brain();
		void blabla();
	private:
		std::string _ideas[100];
};

#endif // BRAIN_HPP