#ifndef GRADETOOLOWEXCEPTION_HPP
# define GRADETOOLOWEXCEPTION_HPP

#include "Bureaucrat.hpp"

 /*
	Je redefinie le comportement de what car c'est une fonction virtual puis je
	rajoute le mot clé const throw pour préciser que cette fonction ne lève pas
	 d'exeption.
 */
class GradeTooLowException : public std::exception
{
	public:
		const char* what() const throw()
		{
			const char *exception = "Error. Your grade is too low";
			return (exception);
		}
};

#endif // GRADETOOLOWEXCEPTION_HPP