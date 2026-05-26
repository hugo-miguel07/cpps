/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:09:01 by htavares          #+#    #+#             */
/*   Updated: 2026/05/26 17:54:08 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
	std::string name;
	
	public:
	DiamondTrap(std::string name);
	DiamondTrap( void );
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &f);
	DiamondTrap& operator=(const DiamondTrap& f);
	void attack(const std::string& target);
	void whoAmI( void );
};

#endif