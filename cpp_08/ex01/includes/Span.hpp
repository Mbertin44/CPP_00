#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

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

class Span
{
	public:
		Span();
		Span(unsigned int max_value);
		Span(Span &src);
		Span &operator=(Span &rhs);
		~Span();
		void	addNumber(int value); // ajoute un nombre a la Span
		template<typename InputIterator>
		void	addNumbers(InputIterator first, InputIterator last);
		int		shortestSpan();
		int		longestSpan();
	private:
		unsigned int		_max_value;
		std::vector<int>		_value;
};

class MaxValue : std::exception
{
	public:
		const char *what() const throw()
		{
			return ("The span is full\n");
		}
};

class NotEnoughtNumber : std::exception
{
	public:
		const char *what() const throw()
		{
			return ("The span don't have enought number\n");
		}
};

#endif