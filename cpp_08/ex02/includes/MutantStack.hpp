#pragma once

#include <stack>
#include <string>
#include <iostream>
#include <iterator>
#include <list>

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
class MutantStack : public std::stack<T> {
	public :
		MutantStack();
		virtual ~MutantStack();
		typedef typename std::deque<T>::iterator iterator;
		iterator	begin();
		iterator	end();
};

/*
	En déclarant iterator comme un alias de std::deque<T>::iterator, je peux
	utiliser simplement MutantStack<int>::iterator au lieu de typename
	std::deque<T>::iterator, ce qui simplifie la syntaxe et améliore la
	lisibilité du code.

	Sans le typedef, je devrai utiliser la syntaxe plus verbeuse au moment de
	déclarer un iterateur dans le main :

	typename MutantStack<int>::iterator it = mstack.begin();
	typename MutantStack<int>::iterator ite = mstack.end();

	Dans le fond c'est le main qui impose ca
*/