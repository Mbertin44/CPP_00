/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:38 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/10 09:46:59 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}

// int main()
// {
// 	Fixed addition(Fixed(2) + Fixed(5));
// 	Fixed multiplication(Fixed(2) * Fixed(5));
// 	Fixed soustraction(Fixed(2) - Fixed(5));
// 	Fixed division(Fixed(2) / Fixed(5));
// 	Fixed assignation = addition;

// 	std::cout << "Test des operateurs arithmetiques : " << std::endl << std::endl;
// 	std::cout << addition << std::endl;
// 	std::cout << multiplication << std::endl;
// 	std::cout << soustraction << std::endl;
// 	std::cout << division << std::endl;
// 	std::cout << assignation << std::endl;
// 	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

// 	std::cout << "Test des operateurs de comparaison. 1 = true 0 = false" << std::endl << std::endl;
// 	bool comparaison = addition < multiplication;
// 	std::cout << addition << " est inférieur à " << multiplication << " : " << comparaison << std::endl;
// 	comparaison = addition <= multiplication;
// 	std::cout << addition << " est inférieur ou égal à " << multiplication << " : " << comparaison << std::endl;
// 	comparaison = addition > multiplication;
// 	std::cout << addition << " est supérieur à " << multiplication << " : " << comparaison << std::endl;
// 	comparaison = addition >= multiplication;
// 	std::cout << addition << " est supérieur ou égal à " << multiplication << " : " << comparaison << std::endl;
// 	comparaison = addition == multiplication;
// 	std::cout << addition << " est égal à " << multiplication << " : " << comparaison << std::endl;
// 	comparaison = addition != multiplication;
// 	std::cout << addition << " est différent à " << multiplication << " : " << comparaison << std::endl;
// 	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

// 	std::cout << "Test des operateurs d'incrémentation et de décrémentation" << std::endl << std::endl;
// 	addition = 0;
// 	std::cout << addition << std::endl;
// 	std::cout << ++addition << std::endl;
// 	std::cout << addition << std::endl;
// 	std::cout << addition++ << std::endl;
// 	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

// 	std::cout << "Test des operateurs max et min" << std::endl << std::endl;
// 	Fixed a(10);
// 	Fixed b(50);
// 	const Fixed c(30);
// 	const Fixed d(40);
// 	std::cout << "Quel est la valeur max entre " << a << " et " << b << " ? La valeur max est : " << Fixed::max(a, b) << std::endl;
// 	std::cout << "Quel est la valeur constante max entre " << c << " et " << d << " ? La valeur max est : " << Fixed::max(c, d) << std::endl;
// 	std::cout << "Quel est la valeur min entre " << a << " et " << b << " ? La valeur min est : " << Fixed::min(a, b) << std::endl;
// 	std::cout << "Quel est la valeur constante min entre " << c << " et " << d << " ? La valeur min est : " << Fixed::min(c, d) << std::endl;
// }