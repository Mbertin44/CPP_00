/*
	Pourquoi il n'y a pas le include de Array.hpp ?

	Un fichier .tpp est différent d'un .cpp même si son contenu est très similaire.
	En fait un fichier tpp est une exention de mon template .hpp. Par exemple
	j'aurais pu mettre toute les definition de mes fonctions membres à la suite
	du prototype de cette class dans le fichier .hpp.

	Dans tous les cas le compilateur va dabord passer par le .hpp dans mon main
	(#include "../includes/Array.hpp"), ensuite lire le prototype de ma class puis
	enfin passer par le include a la fin du Array.hpp pour voir les définitions
	(#include "../src/Array.class.tpp") et enfin passer dans ce fichier .tpp.
*/

template <typename T>
Array<T>::Array() : _size(0)
{
	this->_array = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n])
{
	//this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = i;
	return ;
}

template <typename T>
Array<T>::Array(const Array &src)
{
	*this = src;
	return;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

template <typename T>
unsigned int Array<T>::size() const{
	return (_size);
}

template <typename T>
T &Array<T>::operator[](size_t index)
{
	if (index > _size)
		throw ArraySizeException();
	return (this->_array[index]);
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		delete []this->_array;
		this->_size = rhs._size;
		this->_array = new T[rhs._size];
		for (unsigned int i = 0; i < _size; i++)
			this->_array[i] = rhs._array[i];
	}
	return (*this);
}
