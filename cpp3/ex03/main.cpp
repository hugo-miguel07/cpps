/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:15 by htavares          #+#    #+#             */
/*   Updated: 2026/05/26 18:00:32 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main( void )
{
	DiamondTrap defaultTrap;
	std::cout << std::endl;

	DiamondTrap namedTrap("Dark Choccy");
	std::cout << std::endl;

	defaultTrap.attack("White Choccy");
	namedTrap.attack("White Choccy");
	std::cout << std::endl;

	defaultTrap.whoAmI();
	std::cout << std::endl;
	namedTrap.whoAmI();
	std::cout << std::endl;

	DiamondTrap copyTrap(namedTrap);
	copyTrap.whoAmI();
	std::cout << std::endl;

	DiamondTrap assignedTrap;
	assignedTrap = namedTrap;
	assignedTrap.whoAmI();
	std::cout << std::endl;

	namedTrap.ClapTrap::takeDamage(40);
	namedTrap.ClapTrap::beRepaired(20);
	std::cout << "HP: " << namedTrap.ClapTrap::getHp() << std::endl;
	std::cout << "EP: " << namedTrap.ClapTrap::getEp() << std::endl;
	std::cout << "AD: " << namedTrap.ClapTrap::getAd() << std::endl;

	return (0);
}
