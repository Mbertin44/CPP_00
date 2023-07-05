#include <stack>
#include <string>
#include <iostream>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
	public :
		typename std::deque<T>::iterator	begin();
		typename std::deque<T>::iterator	end();
		typename std::deque<T>::iterator mutant_iterator;
};
