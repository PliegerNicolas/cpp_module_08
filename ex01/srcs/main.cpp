/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:39:17 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/01 15:05:46 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

#define SIZE 25

int	main(void)
{
	Span	a(SIZE);

	std::srand(static_cast<unsigned int>(time(nullptr)));

	for (size_t i = 0; i < SIZE; i++)
		a.addNumber(i + std::rand() % 100);
	//std::cout << a << std::endl;
	std::cout << a.getValue(0) << std::endl;
	std::cout << a.getValue(99) << std::endl;
	std::cout << a.getValue(100) << std::endl;
	std::cout << a.getValue(-1) << std::endl;
	return (0);
}
