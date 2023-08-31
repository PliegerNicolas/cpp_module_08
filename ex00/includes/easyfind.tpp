#pragma once

#include "easyfind.hpp"

template <typename T>
typename T::size_type	easyfind(T &container, const int value)
{
    typename T::iterator	it;
	typename T::size_type	index;

	it = std::find(container.begin(), container.end(), value);

	if (it != container.end())
	{
		index = std::distance(container.begin(), it);
		return (index);
	}
    throw std::runtime_error("Value not found in container");
}
