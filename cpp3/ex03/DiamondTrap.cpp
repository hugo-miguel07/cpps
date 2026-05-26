/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:08:19 by htavares          #+#    #+#             */
/*   Updated: 2026/05/26 18:06:06 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(), ScavTrap(), FragTrap(), name(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	ClapTrap::setName(name + "_clap_name");
	this->setHp(100);
	this->setEp(50);
	this->setAd(30);
}

DiamondTrap::DiamondTrap( void )
: ClapTrap(), ScavTrap(), FragTrap(), name("Rihanna")
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	ClapTrap::setName("Rihanna_clap_name");
	this->setHp(100);
	this->setEp(50);
	this->setAd(30);
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
