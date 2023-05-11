/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:17:06 by mbertin           #+#    #+#             */
/*   Updated: 2023/05/05 11:08:32 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

 /*
	Je prend la valeur donné en paramètre, et je décale sa valeur BINAIRE de 8 (arbitraire). Donc si ma valeur binaire est par exemple 101, sa valeur BINAIRE après le decalage sera de 10100000000. Apres ca je stock sa representation en virgule fixe dans _RawBits.
*/
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_RawBits = value << _Bits;
}

 /*
	Même logique que le constructeur au dessus mais un chemin différent. Pour avoir un float en virgule fixe je dois prendre le float et le multiplier par 256.

	Pourquoi 256 ?
	Je veux pas faire une decalage de bits (comme avec un int) sur ma valeur float car si je fais ca je vais rajouter 8 fois un 0 à sa valeur binaire. Si je fais ca je vais modifier sa valeur binaire et donc perdre sa valeur reel en decimal.

	A la place je fais un decalage de 8 bits sur la valeur 1 (qui va donner 100 000 000 en binanire qui lui est égal a 256). A partir de la je multiplie mon float par 256 et j'aurais le bon resultat en virgule fixe.

	Pourquoi faire le decalage sur 1 ?
	Je veux avoir la representation reel de mon 8 bits (qui est binaire) en décimal. Le fait de décaler la valeur decimal 1 de 8 bits va me donner la valeur decimal de mon chiffre binaire 8 : 256

	Pourquoi quand j'utilise roundf je passe de 42.418 a 42.4219?
	En réalité on pourrait croire que je finis avec une plus grande valeur decimal alors que non. 42.418 est une precision limite en realite c'est peut etre 42.41899797... Donc quand je passe de 42.4219 c'est peut être 42.42196546... Ce qui est important de retenir c'est que j'ai toujours trois chiffres apres la virgule. Donc je suis passé de 42.418 à 42.421. Pour être encore plus(moins) précis je suis passé de 42.418 à 42.42, donc l'arrondi de la valeur decimal 42.418. Le fait que l'arrondi donne un nombre avec plus de chiffres que l'original peut sembler contre-intuitif, mais cela est dû à la représentation binaire des nombres à virgule flottante. La précision limitée de cette représentation peut entraîner des erreurs d'arrondi qui conduisent à des résultats inattendus.
*/
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_RawBits = roundf(value * (1 << _Bits)); //256
}

// Je fais l'inverse de l'operation dans mon constructeur par Int
// Ne pas oublier de cast _RawBits en float pour ne pas perdre la virgule
float Fixed::toFloat( void ) const
{
	return ((float)_RawBits / 256);
}

// Je fais l'inverse de l'operation dans mon constructeur par Float
int Fixed::toInt( void ) const
{
	return (_RawBits >> _Bits);
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_RawBits = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_RawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
}

std::ostream& operator<<(std::ostream& out_straeam, const Fixed &fixe)
{
	return (out_straeam << fixe.toFloat());
}