/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:38 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/11 23:06:13 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

int main()
{
	Brain* test = new Brain();
	test->blabla();
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << GREEN_C << dog->getType() << " " WHITE_C << std::endl;
	std::cout << RED_C << cat->getType() << " " WHITE_C << std::endl;
	std::cout << PURPLE_C << wrong_cat->getType() << " " WHITE_C << std::endl;
	meta->makeSound();
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	wrong_meta->makeSound();
	wrong_cat->makeSound();
	delete dog;
	delete cat;
	delete meta;
	delete wrong_cat;
	delete wrong_meta;
	return 0;
}