/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:13 by htavares          #+#    #+#             */
/*   Updated: 2026/04/30 16:17:03 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

# ifndef CT_MAXHP
#  define CT_MAXHP 15
# endif

class ClapTrap
{
	private:
	std::string name;
	unsigned int hp;
	unsigned int ep;
	unsigned int ad;
	
	public:
	ClapTrap(std::string name);
	ClapTrap( void );
	~ClapTrap();
	ClapTrap(const ClapTrap &f);
	ClapTrap& operator=(const ClapTrap& f);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};

#endif