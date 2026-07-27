/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-07-13 17:00:11 by htavares          #+#    #+#             */
/*   Updated: 2026-07-13 17:00:11 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
void Print(T const &a) {
	std::cout << a << std::endl;
}

template<typename T, typename F>
void iter(T *array, std::size_t size, F func)
{
	if (!array)
		return ;
	for (std::size_t i = 0; i < size; ++i)
		func(array[i]);
}