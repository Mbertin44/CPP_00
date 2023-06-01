#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

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

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		~Array();
		Array &operator=(Array const &rhs);
		T &operator[](size_t index);
		unsigned int size() const;
		class ArraySizeException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Array size exceeded");
			}
		};
	private:
		unsigned int	_size;
		T				*_array;
};

/*
	Pourquoi le include est à la fin ?

	Un fichier .tpp est différent d'un .cpp même si son contenu est très similaire.
	En fait un fichier tpp est une exention de mon template .hpp. Par exemple
	j'aurais pu mettre toute les definition de mes fonctions membres à la suite
	du prototype de cette class. Si j'avais mis mon include en haut du fichier comme un .cpp
	le compilateur aurait cherchez à lire mes definition avant mes protoype et
	n'aurait donc pas compris au moment de la compilation.
*/
#include "../src/Array.class.tpp"


#endif