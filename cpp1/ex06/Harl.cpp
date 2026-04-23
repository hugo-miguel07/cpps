/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:00:16 by htavares          #+#    #+#             */
/*   Updated: 2026/04/23 18:04:14 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special- "
		<< "ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra "
		<< "bacon costs more money. You didn’t put "
		<< "enough bacon in my burger! If you did, "
		<< "I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have "
		<< "some extra bacon for free. I’ve been "
		<< "coming for years, whereas you started "
		<< "working here just last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want "
		<< "to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			index = i;
	}
	
	switch (index)
	{
		case 0:
			std::cout <<  "[ DEBUG ]" << std::endl;
			this->debug();
			std::cout <<  "\n";
			index++;
		case 1:
			std::cout <<  "[ INFO ]" << std::endl;
			this->info();
			std::cout <<  "\n";
			index++;
		case 2:
			std::cout <<  "[ WARNING ]" << std::endl;
			this->warning();
			std::cout <<  "\n";
			index++;
		case 3:
			std::cout <<  "[ ERROR ]" << std::endl;
			this->error();
			std::cout <<  "\n";
			break ;
		default:
			std::cout <<  "[ Harl is yapping again, dont mind him ]\n" << std::endl;
	}
}
