/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:08:19 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:17:51 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->ad = 30;
}

DiamondTrap::DiamondTrap( void )
: ClapTrap("Rihanna_clap_name"), ScavTrap(), FragTrap(), name("Rihanna")
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->ad = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &f)
: ClapTrap(f), ScavTrap(f), FragTrap(f), name(f.name)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& f)
{
	if (this != &f)
	{
		ClapTrap::operator=(f);
		this->name = f.name;
	}
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << this->ClapTrap::getName() << std::endl;
}
