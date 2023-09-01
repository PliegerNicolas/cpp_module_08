/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:04:05 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/01 17:18:11 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <stack>

template <class T>
class	MutantStack: public std::stack<T>
{
	private:
		/* Attributs */
		std::stack<T>	_stack;

		/* Constructors & Destructors */

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */
		MutantStack(void);

		MutantStack(const MutantStack &other);
		MutantStack	&operator=(const MutantStack &other);

		~MutantStack(void);

		/* Member functions */
};

#include "MutantStack.tpp"
