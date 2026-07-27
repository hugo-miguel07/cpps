/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-07-13 16:58:37 by htavares          #+#    #+#             */
/*   Updated: 2026-07-13 16:58:37 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int array[] = {0, 1, 2};
	
	::iter(array, 3, Print<int>);

	std::string string[] = {"ola", "hello", "adeus"};
	
	::iter(string, 3, Print<std::string>);
		
	int const constarray[] = {0, 1, 2};
	
	::iter(constarray, 3, Print<int>);

	char a[] = {'a', 'b', 'c'};
	
	::iter(a, 3, Print<char>);

	return (0);
}
