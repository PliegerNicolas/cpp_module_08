/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:41:32 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/01 15:05:04 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

/* Constructors & Destructors */

/* Public */

Span::Span(void): _maxSize(0), _isSorted(true)
{
	std::cout << "\033[36;2m";
	std::cout << "Span : Default constructor called";
	std::cout << "\033[0m" << std::endl;

	_span.reserve(0);
}

Span::Span(const unsigned int &N): _maxSize(N), _isSorted(true)
{
	std::cout << "\033[36;2m";
	std::cout << "Span : constructor with N parameter called";
	std::cout << "\033[0m" << std::endl;

	_span.reserve(_maxSize);
}

Span::Span(const Span &other): _maxSize(other._maxSize), _span(other._span)
{
	std::cout << "\033[36;2m";
	std::cout << "Span : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Span	&Span::operator=(const Span &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Span : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_maxSize = other._maxSize;
		_span = other._span;
	}
	return (*this);
}

Span::~Span(void)
{
	std::cout << "\033[33;2m";
	std::cout << "Span : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member Functions */

void	Span::addNumber(const int &nbr)
{
	if (_span.size() >= _maxSize)
		throw std::runtime_error("Span is full");
	_span.push_back(nbr);
	if (_span.size() > 1)
		_isSorted = false;
}

void	Span::sort(void)
{
	if (!_isSorted)
	{
		std::sort(_span.begin(), _span.end());
		_isSorted = true;
	}
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	shortest;
	unsigned int	temp;

	if (_span.size() <= 1)
		throw	std::runtime_error("Not enough elements in Span");
	Span::sort();
	for(std::vector<int>::iterator iter = _span.begin() + 1; iter < _span.end(); iter++)
	{
		temp = abs(*(iter - 1) + *iter);
		if (temp < shortest)
			shortest = temp;
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void)
{
	unsigned int	longest;
	unsigned int	temp;

	if (_span.size() <= 1)
		throw	std::runtime_error("Not enough elements in Span");
	Span::sort();
	for(std::vector<int>::iterator iter = _span.begin(); iter < _span.end(); iter++)
	{
		temp = abs(*(iter - 1) + *iter);
		if (temp > longest)
			longest = temp;
	}
	return (longest);
}

/* Public */

// Getter functions

int	Span::getValue(const unsigned int &index) const
{
	if (index >= _maxSize)
		throw	std::runtime_error("getValue :: Invalid index given.");
	return (_span[index]);
}

// Setter functions

/* Private */
