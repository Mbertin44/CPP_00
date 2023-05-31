#include "Array.class.tpp"

// template <typename T>
Array::Array()
{
	this->_array = new _array;
}

// template <typename T>
Array::Array(unsigned int &n)
{
	this->_array = new _array[n];
}


// template <typename T>
Array::Array(const Array &src)
{
	this = src;
}

// template <typename T>
const size_t Array::size() const{
	size_t size = 0;
	while (this->_array[size])
		++size;
	return (size);
}

template <typename T>
T Array::operator[](size_t index) const
{
	if (index > size())
		throw what.e("Array size exceeded\n");
	return (this->_array[index]);
}

// template <typename T>
Array Array::operator=(Array const &rhs) const
{
	this->_array = new rhs._array[size()];
	for (size_t i = 0; i < size(); i++)
		this->_array[i] = rhs._array[i];
	return (*this);
}