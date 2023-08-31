/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:13:57 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 17:24:10 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "easyfind.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::vector<int>			v1;
	std::vector<std::string>	v2;
	std::vector<double>			v3;

	for(size_t i = 0; i < 10; i++)
		v1.push_back(i);
	for(size_t i = 0; i < 10; i++)
		v2.push_back("string" + std::to_string(i));
	::easyfind(v1, 3);
	::easyfind(v2, 2);
	::easyfind(v3, 3);
	return (0);
}
