/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:56:26 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/18 17:23:19 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0){}

PhoneBook::~PhoneBook(){}

void	PhoneBook::runPhoneBook()
{
	std::string input;

	std::cout << "Welcome to your phone book ! What can i do for you ?" << std::endl;
	std::cout << ">";
	while (1)
	{
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			PhoneBook::addContact();
		else if (input.)
	}
}

/*
	Un contact possède les champs suivants : first name (prénom), last name(nom de famille), nickname (surnom), phone number (numéro de téléphone),et darkest secret (son plus lourd secret). Les champs d’un contact enregistré nepeuvent être vides.
*/
void	PhoneBook::addContact()
{
	newFirstName();
	newLastName();
	newNickname();
	newPhoneNumber();
	newSecret();
}


void	PhoneBook::newFirstName()
{
	std::string name;

	std::cout << "What's the first name of the contact ?" << std::endl;
	std::cout << ">";
	std::getline(std::cin, name);
	_contact[_index].set_name(name);
}

void	PhoneBook::newLastName()
{
	std::string LastName;

	std::cout << "What's the last name of the contact ?" << std::endl;
	std::cout << ">";
	std::getline(std::cin, LastName);
	_contact[_index].set_lastName(LastName);

}

void	PhoneBook::newNickname()
{
	std::string NickName;

	std::cout << "What's the nickname of the contact ?" << std::endl;
	std::cout << ">";
	std::getline(std::cin, NickName);
	_contact[_index].set_nickname(NickName);
}

void	PhoneBook::newPhoneNumber()
{
	std::string PhoneNumber;

	std::cout << "What's the phone number of the contact ?" << std::endl;
	std::cout << ">";
	std::getline(std::cin, PhoneNumber);
	_contact[_index].set_phoneNumber(PhoneNumber);
}

void	PhoneBook::newSecret()
{
	std::string Secret;

	std::cout << "What's the secret of the contact ?" << std::endl;
	std::cout << ">";
	std::getline(std::cin, Secret);
	_contact[_index].set_darkestSecret(Secret);
}