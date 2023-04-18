/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:05:25 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/18 13:22:00 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
		std::string get_name() const;
		std::string get_lastName() const;
		std::string get_nickname() const;
		std::string get_phoneNumber() const;
		std::string get_darkestSecret() const;
		void		set_name(std::string name);
		void		set_lastName(std::string lastName);
		void		set_nickname(std::string nickname);
		void		set_phoneNumber(std::string phoneNumber);
		void		set_darkestSecret(std::string darkestSecret);
	private:
		std::string _name;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};