/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:00:16 by htavares          #+#    #+#             */
/*   Updated: 2026/04/20 13:11:46 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << " love having extra bacon for my \
		7XL-double-cheese-triple-pickle-special-\
		ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra \
		bacon costs more money. You didn’t put \
		enough bacon in my burger! If you did, \
		I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have \
		some extra bacon for free. I’ve been \
		coming for years, whereas you started \
		working here just last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want \
		to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*t_func)();

	t_func funcs[4] = {&Harl::debug, &Harl::info,
						&Harl::warning, &Harl::error};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*(funcs[i]))();
			return ;
		}
	}
}
