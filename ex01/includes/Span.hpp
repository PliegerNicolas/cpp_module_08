/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:40:15 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/01 11:25:56 by nplieger         ###   ########.fr       */
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

		void			addNumber(const int &nbr);

		void			sort(void);

		unsigned int	shortestSpan(const int start, const int end);
		unsigned int	longestSpan(const int start, const int end);
};
