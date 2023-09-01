/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:39:17 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/01 16:31:32 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

#define SIZE 3

#define CYAN "\033[36m"
#define CLEAR "\033[0m"

int	main(void)
{
	Span	a(SIZE);

	std::srand(static_cast<unsigned int>(time(nullptr)));

	for (size_t i = 0; i < SIZE; i++)
		a.addNumber(i + std::rand() % 1000);
	std::cout << CYAN << "Unsorted Span = " << CLEAR <<a << std::endl;
	std::cout << "Shortest Span = " << a.shortestSpan() << std::endl;
	std::cout << "Longest Span = " << a.longestSpan() << std::endl;
	std::cout << CYAN << "Sorted Span = " << CLEAR << a << std::endl;
	return (0);
}
