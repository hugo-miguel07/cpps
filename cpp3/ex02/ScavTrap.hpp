/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:32:10 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:03:27 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class ScavTrap: public ClapTrap
{	
	public:
	ScavTrap(std::string name);
	ScavTrap( void );
	~ScavTrap();
	ScavTrap(const ScavTrap &f);
	ScavTrap& operator=(const ScavTrap& f);
	void guardGate( void );
	void attack(const std::string& target);
};

#endif