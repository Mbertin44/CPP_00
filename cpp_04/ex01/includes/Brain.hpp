/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:45:39 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/11 23:06:33 by admin            ###   ########.fr       */
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
		Brain &operator=(Brain &rhs);
		~Brain();
		void blabla();
	private:
		std::string _ideas[100];
};

#endif // BRAIN_HPP