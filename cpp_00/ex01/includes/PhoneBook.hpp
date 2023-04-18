/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:05:27 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/18 16:09:06 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iomanip>
#include <iostream>
#include "Contact.hpp"

/*
	PhoneBook :
	◦ Représente le répertoire.
	◦ Contient un tableau de contacts.
	◦ Peut enregistrer 8 contacts maximum. Si l’utilisateur tente d’ajouter un 9èmecontact, remplacez le plus ancien par celui-ci.◦ Notez que l’allocation dynamique est interdite
*/


class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	runPhoneBook();
		void	addContact();
		void	newFirstName();
		void	newLastName();
		void	newNickname();
		void	newPhoneNumber();
		void	newSecret();
	private:
		Contact _contact[8];
		int		_index;
};

#endif