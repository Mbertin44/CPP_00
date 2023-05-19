#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int grade_sign, int grade_exec);
		Form(const Form &src);
		~Form();
		Form 				&operator=(const Form &rhs);
		const std::string	getName() const;
		int  				getGradeSign() const;
		int  				getGradeExec() const;
		bool  				getSigned() const;
		void				beSigned(Bureaucrat &src);
	private:
		const std::string _name;
		bool _signed;
		const int _grade_sign;
		const int _grade_exec;
};

std::ostream& operator<<(std::ostream& out_stream, const Form &src);

#endif // FORM_HPP