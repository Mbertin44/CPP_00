/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:05:25 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/02 10:16:24 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>

#define BLUE_CL "\033[1;36m"
#define WHITE_CL "\033[0;37m"
#define RED_CL "\033[0;31m"
#define YELLOW_CL "\033[0;33m"
#define PINK_CL "\033[38;2;255;192;203m"
#define GREEN_CL "\033[0;32m"

class Contact
{
	public:
		Contact();
		~Contact();
		const std::string &get_name() const;
		const std::string &get_lastName() const;
		const std::string &get_nickname() const;
		const std::string &get_phoneNumber() const;
		const std::string &get_darkestSecret() const;
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