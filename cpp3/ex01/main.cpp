/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:15 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:01:42 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "iostream"

int main( void )
{
	ClapTrap ct = ClapTrap("Corn");

	std::cout << std::endl;

	ScavTrap st = ScavTrap("Popcorn");

	std::cout << std::endl;

	ScavTrap st_dflt = ScavTrap();

	std::cout << std::endl;

	ct.attack("Chocolate");
	st.attack("Chocolate");
	st_dflt.attack("Chocolate");
	st.attack("Big Choccy");

	std::cout << std::endl;
	
	st_dflt = ScavTrap(st);
	std::cout << std::endl;
	std::cout << st_dflt.getName() << std::endl << std::endl;
	
	std::cout << "HP: " << st_dflt.getHp() << std::endl;
	std::cout << "EP: " << st_dflt.getEp() << std::endl;
	std::cout << "AD: " << st_dflt.getAd() << std::endl;

	st_dflt.beRepaired(2);

	std::cout << "HP: " << st_dflt.getHp() << std::endl;
	std::cout << "EP: " << st_dflt.getEp() << std::endl;
	std::cout << "AD: " << st_dflt.getAd() << std::endl;

	std::cout << std::endl;

	st_dflt.guardGate();
	
	return (0);	
}
