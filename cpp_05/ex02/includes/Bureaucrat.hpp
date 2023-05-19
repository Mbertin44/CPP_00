#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <fstream>

#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "UnsignedForm.hpp"

#define BLACK_C     "\033[0;30m"
#define DARK_GRAY_C "\033[1;30m"
#define RED_C       "\033[0;31m"
#define LIGHT_RED_C "\033[1;31m"
#define GREEN_C     "\033[0;32m"
#define LIGHT_GREEN_C "\033[1;32m"
#define BROWN_C     "\033[0;33m"
#define YELLOW_C    "\033[1;33m"
#define BLUE_C      "\033[0;34m"
#define LIGHT_BLUE_C "\033[1;34m"
#define PURPLE_C    "\033[0;35m"
#define PINK_C      "\033[1;35m"
#define CYAN_C      "\033[0;36m"
#define LIGHT_CYAN_C "\033[1;36m"
#define LIGHT_GRAY_C "\033[0;37m"
#define WHITE_C     "\033[1;37m"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		Bureaucrat 			&operator=(const Bureaucrat &rhs);
		const std::string	getName() const;
		int  				getGrade() const;
		void				Upgrade();
		void				Downgrade();
		void				signForm(AForm &src);
	private:
		const std::string _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& out_stream, const Bureaucrat &src);

#include "AForm.hpp"

#endif // BUREAUCRAT_HPP