#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string name, int grade_sign, int grade_exec);
		AForm(const AForm &src);
		~AForm();
		AForm 				&operator=(const AForm &rhs);
		const std::string	getName() const;
		int  				getGradeSign() const;
		int  				getGradeExec() const;
		bool  				getSigned() const;
		void				beSigned(Bureaucrat &src);
		void				virtual execute(const Bureaucrat &executor) = 0;
	private:
		const 		std::string _name;
		bool 		_signed;
		const int	_grade_sign;
		const int	_grade_exec;
};

std::ostream& operator<<(std::ostream& out_stream, const AForm &src);


#endif // AFORM_HPP