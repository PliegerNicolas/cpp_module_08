#pragma once

#include "easyfind.hpp"
#include "TypeTraits.tpp"

template <typename T>
typename T::size_type	easyfind(T &container, const int value)
{
	typename T::iterator	it;
	typename T::size_type	index;

	if (!is_same<typename T::value_type, int>::value)
		throw std::runtime_error("Container type must be int");

	it = std::find(container.begin(), container.end(), value);

	if (it != container.end())
	{
		index = std::distance(container.begin(), it);
		return (index);
	}
	throw std::runtime_error("Value not found in container");
}
