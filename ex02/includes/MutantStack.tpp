#pragma once
#include "MutantStack.hpp"

/* Constructors & Destructors */

/* Public */

template <class T>
MutantStack<T>::MutantStack(void): std::stack<T>()
{
	std::cout << "\033[36;2m";
	std::cout << "MutantStack : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &other): std::stack<T>(other)
{
	std::cout << "\033[36;2m";
	std::cout << "MutantStack : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

template <class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &other)
{
	std::cout << "\033[36;2m";
	std::cout << "MutantStack : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		this->c = other.c;
	}
	return (*this);
}

template <class T>
MutantStack<T>::~MutantStack(void)
{
	std::cout << "\033[33;2m";
	std::cout << "MutantStack : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member Functions */

// Iterators

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

/* Public */

// Getter functions

// Setter functions

/* Private */
