/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:16:49 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/24 09:49:08 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

const std::string &Contact::get_name() const {return (_name);}

const std::string &Contact::get_lastName() const {return (_lastName);}

const std::string &Contact::get_nickname() const {return (_nickname);}

const std::string &Contact::get_phoneNumber() const {return (_phoneNumber);}

const std::string &Contact::get_darkestSecret() const {return (_darkestSecret);}

void		Contact::set_name(std::string name){_name = name;}

void		Contact::set_lastName(std::string lastName){_lastName = lastName;}

void		Contact::set_nickname(std::string nickname){_nickname = nickname;}

void		Contact::set_phoneNumber(std::string phoneNumber){_phoneNumber = phoneNumber;}

void		Contact::set_darkestSecret(std::string darkestSecret){_darkestSecret = darkestSecret;}