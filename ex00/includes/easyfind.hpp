/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:15:13 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 19:25:27 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <algorithm>
#include <exception>

#include <vector>
#include <list>

template <typename T>
typename T::size_type	easyfind(T &container, const int value);

#include "easyfind.tpp"
