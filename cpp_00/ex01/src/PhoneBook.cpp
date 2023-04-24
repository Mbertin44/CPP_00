/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:56:26 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/24 10:58:59 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0){}

PhoneBook::~PhoneBook(){}

void	PhoneBook::runPhoneBook()
{
	std::string input;

	std::cout <<YELLOW_CL<< "Welcome to your phone book !" << std::endl << std::endl;
	while (1)
	{
		if (std::cin.good())
		{
			std::cout <<BLUE_CL<< "Feature available:" << std::endl;
			std::cout << "ADD | SEARCH | EXIT" << std::endl << std::endl;
			std::cout <<YELLOW_CL<<  "What can i do for you ?" <<WHITE_CL<< std::endl;
			std::cout << ">";
			std::getline(std::cin, input);
			if (input.compare("ADD") == 0)
				PhoneBook::addContact();
			else if (input.compare("SEARCH") == 0)
				PhoneBook::search();
			else if (input.compare("EXIT") == 0)
				break;
		}
		else
			break;
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
	_index++;
	if (_index == 8)
		_index = 0;
}


void	PhoneBook::newFirstName()
{
	std::string name;

	while (name.empty())
	{
		std::cout <<YELLOW_CL<< "What's the first name of the contact ?" <<WHITE_CL<< std::endl;
		std::cout << ">";
		std::getline(std::cin, name);
		if (std::cin.eof())
			exit(0);
	}
	_contact[_index].set_name(name);
}

void	PhoneBook::newLastName()
{
	std::string LastName;

	while (LastName.empty())
	{
		std::cout <<YELLOW_CL<< "What's the last name of the contact ?" <<WHITE_CL<< std::endl;
		std::cout << ">";
		std::getline(std::cin, LastName);
		if (std::cin.eof())
			exit(0);
	}
	_contact[_index].set_lastName(LastName);
}

void	PhoneBook::newNickname()
{
	std::string NickName;
	while(NickName.empty())
	{
		std::cout <<YELLOW_CL<< "What's the nickname of the contact ?" <<WHITE_CL<< std::endl;
		std::cout << ">";
		std::getline(std::cin, NickName);
		if (std::cin.eof())
			exit(0);
	}
	_contact[_index].set_nickname(NickName);
}

void	PhoneBook::newPhoneNumber()
{
	std::string PhoneNumber;
	while(PhoneNumber.empty())
	{
		std::cout <<YELLOW_CL<< "What's the phone number of the contact ?" <<WHITE_CL<< std::endl;
		std::cout << ">";
		std::getline(std::cin, PhoneNumber);
		if (std::cin.eof())
			exit(0);
	}
	_contact[_index].set_phoneNumber(PhoneNumber);
}

void	PhoneBook::newSecret()
{
	std::string Secret;
	while(Secret.empty())
	{
		std::cout <<YELLOW_CL<< "What's the secret of the contact ?" <<WHITE_CL<< std::endl;
		std::cout << ">";
		std::getline(std::cin, Secret);
		if (std::cin.eof())
			exit(0);
	}
	_contact[_index].set_darkestSecret(Secret);
	std::cout <<std::endl <<GREEN_CL<<"New contact created successfully."<<WHITE_CL<< std::endl << std::endl;
}

void	PhoneBook::search()
{
	std::cout <<PINK_CL "---------------------------------------------" << std::endl;
	std::cout << "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" ;
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << setShortName(_contact[i].get_name()) << "|";
		std::cout << std::setw(10) << setShortName(_contact[i].get_lastName()) << "|";
		std::cout << std::setw(10) << setShortName(_contact[i].get_nickname()) << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" <<WHITE_CL<< std::endl;
	displaySearch();
}

std::string	PhoneBook::setShortName(std::string name)
{

	if (name.size() > 10)
	{
		std::string newName = name.substr(0,9);
		newName.append(".");
		return (newName);
	}
	else
		return (name);
}

void	PhoneBook::displaySearch()
{
	std::string index;

	std::cout <<YELLOW_CL<< "What is the index of the contact you are looking for?" <<WHITE_CL<< std::endl;
	std::cout << ">";
	std::getline(std::cin, index);
	try
	{
		int i = std::stoi (index);
		if (i >= 0 && i <= 7 && !_contact[i].get_name().empty())
		{
			std::cout << std::endl;
			std::cout <<PINK_CL<< "First name : " << _contact[i].get_name() << std::endl;
			std::cout << "Last name : " << _contact[i].get_lastName() << std::endl;
			std::cout << "Nickname : " << _contact[i].get_nickname() << std::endl;
			std::cout << "Phone number : " << _contact[i].get_phoneNumber() << std::endl;
			std::cout << "Darkest secret : " << _contact[i].get_darkestSecret() <<WHITE_CL<< std::endl << std::endl;
		}
		else
			std::cerr << "Invalid contact" << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
		// std::cerr << e.what() << std::endl;
		std::cerr << "Invalid entry" << std::endl << std::endl;
	}
}