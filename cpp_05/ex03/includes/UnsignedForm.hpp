#ifndef UNSIGNEDFORM_HPP
# define UNSIGNEDFORM_HPP

#include "Bureaucrat.hpp"

 /*
	Je redefinie le comportement de what car c'est une fonction virtual puis je
	rajoute le mot clé const throw pour préciser que cette fonction ne lève pas
	 d'exeption.
 */
class UnsignedForm : public std::exception
{
	public:
		const char* what() const throw()
		{
			const char *exception = "Error. Form is unsigned";
			return (exception);
		}
};

#endif // UNSIGNEDFORM_HPP