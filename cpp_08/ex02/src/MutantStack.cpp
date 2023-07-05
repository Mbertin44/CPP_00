#include "../includes/MutantStack.hpp"

template <typename T>
typename std::deque<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename std::deque<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}
