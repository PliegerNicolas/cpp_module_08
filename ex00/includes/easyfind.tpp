#pragma once

#include "easyfind.hpp"

template <typename T>
typename T::size_type	easyfind(T &container, const int value)
{
    typename T::iterator	it;
	typename T::size_type	index;

	if (!std::is_same_v<typename T::value_type, int>)
		throw std::runtime_error("Container type must be int");

	it = std::find(container.begin(), container.end(), value);

	if (it != container.end())
	{
		index = std::distance(container.begin(), it);
		return (index);
	}
    throw std::runtime_error("Value not found in container");
}
