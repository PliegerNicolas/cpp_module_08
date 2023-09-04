/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:13:57 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/04 13:32:53 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "easyfind.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define GRAY "\033[37m"
#define CLEAR "\033[0m"

static void	testIntVector(void)
{
	std::cout << "\033[36;4m" << "testIntVector():" << CLEAR << std::endl;

	std::vector<int>			v1;
	std::vector<int>::size_type	index;

	for(size_t i = 0; i < 10; i++)
		v1.push_back(std::rand() % 10);
	for(size_t i = 0; i < 10; i++)
		std::cout << v1[i] << std::endl;


	std::cout << GREEN << "Looking for '3'" << CLEAR << std::endl;
	try
	{
		index = easyfind(v1, 3);
		std::cout << GREEN << "iterator == "<< GRAY << index << CLEAR << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << CLEAR << std::endl;
	}

	std::cout << GREEN << "Looking for '11' (out of bounds)" << CLEAR << std::endl;
	try
	{
		index = easyfind(v1, 11);
		std::cout << GREEN << "iterator == "<< GRAY << index << CLEAR << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << CLEAR << std::endl;
	}

	std::cout << GREEN << "Looking for '-5' (out of bounds)" << CLEAR << std::endl;
	try
	{
		index = easyfind(v1, -5);
		std::cout << GREEN << "iterator == "<< GRAY << index << CLEAR << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << CLEAR << std::endl;
	}
}

static void	testIntList(void)
{
	std::cout << "\033[36;4m" << "testIntList():" << CLEAR << std::endl;

	std::list<int>				v1;
	std::vector<int>::size_type	index;

	for(size_t i = 0; i < 10; i++)
		v1.push_back(std::rand() % 10);
	for(std::list<int>::iterator it = v1.begin(); it != v1.end(); it++)
		std::cout << *it << std::endl;

	std::cout << GREEN << "Looking for '9'" << CLEAR << std::endl;
	try
	{
		index = easyfind(v1, 9);
		std::cout << GREEN << "iterator == "<< GRAY << index << CLEAR << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << CLEAR << std::endl;
	}

	std::cout << GREEN << "Looking for '11' (out of bounds)" << CLEAR << std::endl;
	try
	{
		index = easyfind(v1, 11);
		std::cout << GREEN << "iterator == "<< GRAY << index << CLEAR << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << CLEAR << std::endl;
	}

	std::cout << GREEN << "Looking for '-5' (out of bounds)" << CLEAR << std::endl;
	try
	{
		index = easyfind(v1, -5);
		std::cout << GREEN << "iterator == "<< GRAY << index << CLEAR << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << CLEAR << std::endl;
	}
}

static void	testDoubleVector(void)
{
	std::cout << "\033[36;4m" << "testDoubleVector():" << CLEAR << std::endl;

	std::vector<double>				v1;
	std::vector<double>::size_type	index;

	for(size_t i = 0; i < 10; i++)
		v1.push_back(std::rand() % 10000 * 0.01);
	for(size_t i = 0; i < 10; i++)
		std::cout << v1[i] << std::endl;

	std::cout << GREEN << "Looking for '3'" << CLEAR << std::endl;
	try
	{
		index = easyfind(v1, 3);
		std::cout << GREEN << "iterator == "<< GRAY << index << CLEAR << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << CLEAR << std::endl;
	}

}

int	main(void)
{
	std::srand(static_cast<unsigned int>(time(NULL)));

	testIntVector();
	testIntList();
	testDoubleVector();
	return (0);
}
