/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:04:05 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/02 12:46:57 by nicolas          ###   ########.fr       */
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

		/* Constructors & Destructors */

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;

		/* Constructors & Destructors */
		MutantStack(void);

		MutantStack(const MutantStack &other);
		MutantStack	&operator=(const MutantStack &other);

		~MutantStack(void);

		/* Member functions */

		// Iterators

		typename MutantStack<T>::iterator			begin(void);
		typename MutantStack<T>::iterator			end(void);
		typename MutantStack<T>::reverse_iterator	rbegin(void);
		typename MutantStack<T>::reverse_iterator	rend(void);
};

#include "MutantStack.tpp"
