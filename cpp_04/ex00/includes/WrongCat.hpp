#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

 /*
	Vue que la fonction makesound dans WrongAnimal n'est pas virtual, WrongCat
	ne passera pas par sa propre definition de makesound
 */
class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		~WrongCat();
		WrongCat &operator=(const WrongCat &src);
		// const std::string &getType () const;
		void makeSound() const;
};

#endif // WRONGCAT_HPP