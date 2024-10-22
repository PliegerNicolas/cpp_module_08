/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:40:15 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/04 14:04:59 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class	Span
{
	private:
		/* Attributs */
		unsigned int		_maxSize;
		bool				_isSorted;
		std::vector<int>	_span;

		/* Constructors & Destructors */

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */
		Span(void);
		Span(const unsigned int	&N);

		Span(const Span &other);
		Span	&operator=(const Span &other);

		~Span(void);

		/* Member functions */

		void				addNumber(const int &nbr);
		void				addRange(std::vector<int>::const_iterator start,
								std::vector<int>::const_iterator end);

		void			sort(void);

		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);

		// Getters

		int					getValue(const unsigned int	&index) const;
		unsigned int		getMaxSize(void) const;

		// Setters
};

std::ostream	&operator<<(std::ostream &os, const Span &span);
