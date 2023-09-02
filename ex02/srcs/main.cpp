/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:03:14 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/02 13:20:30 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MutantStack.hpp"
#include <limits>
#include <algorithm>

#define SIZE 10
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define GRAY "\033[37m"
#define CLEAR "\033[0m"

template <typename T>
static MutantStack<T>	createStack(void)
{
	std::cout << "\033[36;4m" << "createStack():" << CLEAR << std::endl;

	MutantStack<T>	stack;

	if (std::is_integral<T>::value)
	{
		for (size_t i = 0; i < SIZE; i++)
			stack.push(static_cast<T>((rand() % 10)));
	}
	else if (std::is_floating_point<T>::value)
	{
		for (size_t i = 0; i < SIZE; i++)
			stack.push(static_cast<T>((rand() % 1000) * 0.01));
	}
	else
		throw std::runtime_error("Unsupported type");
	return (stack);
}

template <typename T>
static void	iterateThroughStack(MutantStack<T> &stack)
{
	typename MutantStack<T>::reverse_iterator it;
	typename MutantStack<T>::reverse_iterator it_end;

	it = stack.rbegin();
	it_end = stack.rend();

	std::cout << CYAN << "Stack" << CLEAR <<std::endl;
	std::cout << GRAY << "---" << CLEAR << std::endl;
	while (it != it_end)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << GRAY << "---" << CLEAR << std::endl;
}

template <typename T>
static void	playWithStack(MutantStack<T> &stack)
{
	std::cout << "\033[36;4m" << "playWithStack():" << CLEAR << std::endl;

	iterateThroughStack(stack);

	std::cout << GREEN << "Stack top = " << GRAY << stack.top();
	std::cout << GREEN << " (stack size = " << GRAY << stack.size() << GREEN << ")";
	std::cout << CLEAR << std::endl;

	std::cout << GREEN << "Rotate stack" << CLEAR << std::endl;
	if (!stack.empty())
		std::rotate(stack.rbegin(), stack.rbegin() + 1, stack.rend());

	iterateThroughStack(stack);

	std::cout << GREEN << "Remove top element" << CLEAR << std::endl;
	stack.pop();

	std::cout << GREEN << "Stack top = " << GRAY << stack.top();
	std::cout << GREEN << " (stack size = " << GRAY << stack.size() << GREEN << ")";
	std::cout << CLEAR << std::endl;
	iterateThroughStack(stack);
}

int	main(void)
{
	MutantStack<int>	istack;
	MutantStack<double>	dstack;

	std::srand(static_cast<unsigned int>(time(nullptr)));

	try
	{
		istack = createStack<int>();
		dstack = createStack<double>();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	playWithStack(istack);
	playWithStack(dstack);
	return (0);
}
