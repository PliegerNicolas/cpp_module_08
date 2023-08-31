#pragma once

#include <iostream>
#include <exception>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int value)
{
	if (container.empty())
		throw std::exception();
	(void)value;
	return (container.end());
}
