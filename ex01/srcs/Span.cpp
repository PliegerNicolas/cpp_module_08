/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:41:32 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/01 11:26:14 by nplieger         ###   ########.fr       */
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

unsigned int	Span::shortestSpan(const int start, const int end)
{
	if (_span.size() <= 1)
		throw	std::runtime_error("Not enough elements in Span");
	Span::sort();
	(void)start;
	(void)end;
	return (0);
}

unsigned int	Span::longestSpan(const int start, const int end)
{
	if (_span.size() <= 1)
		throw	std::runtime_error("Not enough elements in Span");
	Span::sort();
	(void)start;
	(void)end;
	return (0);
}

/* Public */

// Getter functions

// Setter functions

/* Private */
