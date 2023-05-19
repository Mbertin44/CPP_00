/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:25:09 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/15 11:27:25 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		Cat &operator=(const Cat &src);
		Brain *getBrain();
		void makeSound() const;
	private:
		Brain *_brain;
};

#endif // CAT_HPP