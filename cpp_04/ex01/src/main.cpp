/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:38 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/26 09:59:17 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

/*
	Pourquoi mes destructeur ne sont pas appelé si je n'utilise pas delete ?

	Si je delete chaque instance Cat et Dog la destruction des objets cat et dog
	leur destructeurs seront appelé. Cela inclut également la destruction de l'objet _brain créé dans le constructeur de Dog et Cat.

	Si je créé des Dog et des Cat en utilisant l'opérateur new, mais que je ne libére jamais la mémoire allouée pour ces objets avec delete, leurs destructeurs ne sont jamais appelés. Cela peut entraîner des fuites de mémoire dans mon programme et entraîner des problèmes de performances à long terme.

	Il est important de toujours s'assurer que chaque allocation dynamique de mémoire est associée à une libération appropriée au moyen de l'opérateur delete.
*/

int main()
{
	const Animal *animals[10];
	for (size_t i = 0; i < 5; i++)
	{
		animals[i] = new Dog();
		animals[i]->makeSound();
		std::cout << animals[i] << std::endl << std::endl;
	}
	for (size_t i = 5; i < 10; i++)
	{
		animals[i] = new Cat();
		animals[i]->makeSound();
		std::cout << animals[i] << std::endl << std::endl;
	}
	for (size_t i = 0; i < 10; i++)
	{
		delete animals[i];
		std::cout << std::endl << std::endl;
	}

	Dog* test = new Dog();
	Dog* test2 = new Dog(*test);
	Dog* test3 = test; //assignation de l'adresse. Je ne passe pas par l'overload operator =
	std::cout << test->getBrain() << std::endl;
	std::cout << test2->getBrain() << std::endl;
	std::cout << test3->getBrain() << std::endl;
	delete test;
	delete test2;
	std::cout << std::endl << std::endl;

	Dog test4 = Dog();
	Dog test5 = Dog(test4);
	Dog test6 = test4;//Je passe par l'overload operator
	std::cout << test4.getBrain() << std::endl;
	std::cout << test5.getBrain() << std::endl;
	std::cout << test6.getBrain() << std::endl;

	std::cout << "Cat test" << std::endl;
	Cat* test7 = new Cat();
	Cat* test8 = new Cat(*test7);
	Cat* test9 = test7; //assignation de l'adresse. Je ne passe pas par l'overload operator =
	std::cout << test7->getBrain() << std::endl;
	std::cout << test8->getBrain() << std::endl;
	std::cout << test9->getBrain() << std::endl;
	delete test7;
	delete test8;
	std::cout << std::endl << std::endl;

	Cat test10 = Cat();
	Cat test11 = Cat(test10);
	Cat test12 = test10;//Je passe par l'overload operator
	std::cout << test10.getBrain() << std::endl;
	std::cout << test11.getBrain() << std::endl;
	std::cout << test12.getBrain() << std::endl;
	return 0;
}