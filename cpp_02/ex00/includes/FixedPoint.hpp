/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 09:29:58 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/03 13:50:13 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& source);
		~Fixed();
		Fixed& operator=(const Fixed& rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	_RawBits;
		static const int _Bits = 8;
};