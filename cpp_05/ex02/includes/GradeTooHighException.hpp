#ifndef GRADETOOHIGHEXCEPTION_HPP
# define GRADETOOHIGHEXCEPTION_HPP

#include "Bureaucrat.hpp"

 /*
	Je redefinie le comportement de what car c'est une fonction virtual puis je
	rajoute le mot clé const throw pour préciser que cette fonction ne lève pas
	 d'exeption.
 */
class GradeTooHighException : public std::exception
{
	public:
		const char* what() const throw()
		{
			const char *exception = "Error. Your grade is too high";
			return (exception);
		}
};

#endif // GRADETOOHIGHEXCEPTION_HPP