#pragma once
#include "MutantStack.hpp"

/* Constructors & Destructors */

/* Public */

template <class T>
MutantStack<T>::MutantStack(void)
{
	std::cout << "\033[36;2m";
	std::cout << "MutantStack : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &other)
{
	std::cout << "\033[36;2m";
	std::cout << "MutantStack : Copy constructor called";
	std::cout << "\033[0m" << std::endl;

	(void)other;
}

template <class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &other)
{
	std::cout << "\033[36;2m";
	std::cout << "MutantStack : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		(void)other;
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

/* Public */

// Getter functions

// Setter functions

/* Private */
