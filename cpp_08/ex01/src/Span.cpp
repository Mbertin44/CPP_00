#include "../includes/Span.hpp"

Span::Span() {
	return;
}

Span::Span(unsigned int max_value) : _max_value(max_value) {
	return;
}

Span::Span(Span &src) {
	*this = src;
	return;
}

Span &Span::operator=(Span &rhs) {
	if (this != &rhs) {
		this->_max_value = rhs._max_value;
		this->_value = rhs._value;
	}
	return (*this);
}

Span::~Span() {
	return;
}


void	Span::addNumber(int value) {
	if (_value.size() < _max_value)
		_value.push_back(value);
	else
		MaxValue();
}

template<typename InputIterator>
void Span::addNumbers(InputIterator first, InputIterator last)
{
    while (first != last)
    {
        addNumber(*first);
        ++first;
    }
}

int		Span::shortestSpan() {
    int smallestDistance = std::numeric_limits<int>::max();
	if (_value.size() <= 1)
		NotEnoughtNumber();
    for (std::vector<int>::iterator it = _value.begin(); it != _value.end(); it++)
    {
        for (std::vector<int>::iterator it2 = it + 1; it2 != _value.end(); it2++)
        {
            int distance = std::abs(*it - *it2);
            if (distance > 0 && distance < smallestDistance)
                smallestDistance = distance;
        }
    }
    return (smallestDistance);
}

int		Span::longestSpan() {
    int biggestDistance = 0;

	if (_value.size() <= 1)
		NotEnoughtNumber();
    for (std::vector<int>::iterator it = _value.begin(); it != _value.end(); it++)
    {
        for (std::vector<int>::iterator it2 = it + 1; it2 != _value.end(); it2++)
        {
            int distance = std::abs(*it - *it2);
            if (distance > biggestDistance)
                biggestDistance = distance;
        }
    }
    return (biggestDistance);
}

void	Span::fillSpan(std::vector<int> &vec)
{
	if (vec.size() < this->_max_value - this->_value.size()) {
		this->_value.insert(this->_value.end(), vec.begin(), vec.end());
		std::cout << GREEN_C "The span is now fill" WHITE_C << std::endl;
	}
	else
		std::cout << RED_C "Impossible to fill the span. The span will exceed it's limit" WHITE_C << std::endl;
}