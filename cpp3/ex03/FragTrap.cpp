/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:32:08 by htavares          #+#    #+#             */
/*   Updated: 2026/05/26 18:12:09 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	ClapTrap::setHp(100);
	ClapTrap::setEp(100);
	ClapTrap::setAd(30);
}

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	ClapTrap::setName("Fraggy");
	ClapTrap::setHp(100);
	ClapTrap::setEp(100);
	ClapTrap::setAd(30);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& f)
{
	if (this != &f)
        ClapTrap::operator=(f);
    return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " High fives itself for some reason I guess" << std::endl;
}
