/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 20:29:01 by htavares          #+#    #+#             */
/*   Updated: 2026/07/28 20:50:44 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <algorithm>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw();
};

template<typename T>
T easyfind(T container, int num)
{
	if (std::find(container.begin(), container.end(), num) == container.end())
		throw NotFoundException;
}