/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:20:07 by htavares          #+#    #+#             */
/*   Updated: 2026/04/23 17:51:56 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;
	
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments :(" << std::endl;
		return (1);
	}
	std::string arg = av[1];
	harl.complain(arg);
	return (0);
}
