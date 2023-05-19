/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:03:16 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/15 09:18:59 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <string>
#include <iostream>

#define BLACK_C     "\033[0;30m"
#define DARK_GRAY_C "\033[1;30m"
#define RED_C       "\033[0;31m"
#define LIGHT_RED_C "\033[1;31m"
#define GREEN_C     "\033[0;32m"
#define LIGHT_GREEN_C "\033[1;32m"
#define BROWN_C     "\033[0;33m"
#define YELLOW_C    "\033[1;33m"
#define BLUE_C      "\033[0;34m"
#define LIGHT_BLUE_C "\033[1;34m"
#define PURPLE_C    "\033[0;35m"
#define PINK_C      "\033[1;35m"
#define CYAN_C      "\033[0;36m"
#define LIGHT_CYAN_C "\033[1;36m"
#define LIGHT_GRAY_C "\033[0;37m"
#define WHITE_C     "\033[1;37m"

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal &src);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &rhs);
		std::string getType() const;
		// virtual const std::string &getType() const;
		virtual void makeSound() const = 0;
	protected:
		std::string _type;
};

#endif