/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-07-13 16:59:21 by htavares          #+#    #+#             */
/*   Updated: 2026-07-13 16:59:21 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void swap(T &val1, T &val2)
{
	T temp = val2;
	val2 = val1;
	val1 = temp;
}

template<typename T>
T const &min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template<typename T>
T const &max(T const &a, T const &b)
{
	return (a > b ? a : b);
}
