/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:16:49 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/18 15:47:01 by mbertin          ###   ########.fr       */
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

std::string Contact::get_name() const {return (_name);}

std::string Contact::get_lastName() const {return (_lastName);}

std::string Contact::get_nickname() const {return (_nickname);}

std::string Contact::get_phoneNumber() const {return (_name);}

std::string Contact::get_darkestSecret() const {return (_name);}

void		Contact::set_name(std::string name){_name = name;}

void		Contact::set_lastName(std::string lastName){_name = lastName;}

void		Contact::set_nickname(std::string nickname){_name = nickname;}

void		Contact::set_phoneNumber(std::string phoneNumber){_name = phoneNumber;}

void		Contact::set_darkestSecret(std::string darkestSecret){_name = darkestSecret;}