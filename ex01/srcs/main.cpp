/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:39:17 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/04 13:37:29 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

#define SIZE 5

#define CYAN "\033[36m"
#define CLEAR "\033[0m"

static void	basicTest(void)
{
	std::cout << "\033[36;4m" << "basicTest():" << CLEAR << std::endl;

	Span	a(SIZE);

	std::srand(static_cast<unsigned int>(time(NULL)));

	for (size_t i = 0; i < SIZE; i++)
		a.addNumber(i + std::rand() % 1000);

	std::cout << CYAN << "Unsorted Span = " << CLEAR << a << std::endl;
	std::cout << "Shortest Span = " << a.shortestSpan() << std::endl;
	std::cout << "Longest Span = " << a.longestSpan() << std::endl;
	std::cout << CYAN << "Sorted Span = " << CLEAR << a << std::endl;
}

static void	subjectTest(void)
{
	std::cout << "\033[36;4m" << "subjectTest():" << CLEAR << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

static void	multiInsertionTest(void)
{
	std::cout << "\033[36;4m" << "multiInsertionTest():" << CLEAR << std::endl;

	std::vector<int>	temp;
	Span				a(10);

	temp.push_back(5);
	temp.push_back(1);
	temp.push_back(-2);
	temp.push_back(7);
	temp.push_back(10);

	std::cout << a << std::endl;
	a.addRange(temp.begin(), temp.end());
	std::cout << a << std::endl;
	a.addRange(temp.begin(), temp.end());
	std::cout << a << std::endl;
	try
	{
		a.addRange(temp.begin(), temp.end());
		std::cout << a << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	subjectTest();
	basicTest();
	multiInsertionTest();
	return (0);
}
