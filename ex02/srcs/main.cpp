/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:03:14 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/01 18:06:11 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	mstack;

	std::cout << "mstack.push(5)" << std::endl;
	mstack.push(5);
	std::cout << "mstack.push(17)" << std::endl;
	mstack.push(17);
	std::cout << "mstack.top() = " << mstack.top() << std::endl;
	std::cout << "mstack.size() = " << mstack.size() << std::endl;

	std::cout << "mstack.pop()" << std::endl;
	mstack.pop();
	std::cout << "mstack.size() = " << mstack.size() << std::endl;

	std::cout << "mstack.push(3)" << std::endl;
	mstack.push(3);
	std::cout << "mstack.push(5)" << std::endl;
	mstack.push(5);
	std::cout << "mstack.push(737)" << std::endl;
	mstack.push(737);
	std::cout << "mstack.push(0)" << std::endl;
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it++ << std::endl;
	}

	std::stack<int>	s(mstack);

	return (0);
}
