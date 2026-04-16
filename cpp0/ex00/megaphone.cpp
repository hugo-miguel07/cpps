/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:56:08 by htavares          #+#    #+#             */
/*   Updated: 2026/04/16 15:35:04 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac < 1)
		return (1);
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(av[i][j])));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
