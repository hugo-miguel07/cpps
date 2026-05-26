/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:15 by htavares          #+#    #+#             */
/*   Updated: 2026/05/26 17:07:46 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "iostream"

int main( void )
{
	ClapTrap ct = ClapTrap("Milk Choccy");

	std::cout << std::endl;

	ScavTrap st = ScavTrap("Dark Choccy");

	std::cout << std::endl;

	FragTrap ft = FragTrap("Dubai Choccy");

	std::cout << std::endl;

	ct.attack("White Choccy");
	st.attack("White Choccy");
	ft.attack("White Choccy");

	std::cout << std::endl;
	
	std::cout << "HP: " << ft.getHp() << std::endl;
	std::cout << "EP: " << ft.getEp() << std::endl;
	std::cout << "AD: " << ft.getAd() << std::endl;

	ft.highFivesGuys();
	ft.takeDamage(40);
	ft.beRepaired(20);

	std::cout << "HP: " << ft.getHp() << std::endl;
	std::cout << "EP: " << ft.getEp() << std::endl;
	std::cout << "AD: " << ft.getAd() << std::endl;

	std::cout << std::endl;
	
	return (0);
}
