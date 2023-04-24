/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:47:48 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/24 10:07:18 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

/*
	- Parsing d'un champ vide au moment de ADD
	- Au moment du search, si une entrée fait plus de 10 charactere, couper a 9
		character et ajouter un .
*/

int main()
{
	PhoneBook repertory;

	repertory.runPhoneBook();
}