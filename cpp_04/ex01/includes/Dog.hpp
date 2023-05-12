
#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		Dog &operator=(const Dog &src);
		Brain *getBrain();
		void makeSound() const;
	private:
		Brain *_brain;
};

#endif // DOG_HPP