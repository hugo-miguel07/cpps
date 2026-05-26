/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:13 by htavares          #+#    #+#             */
/*   Updated: 2026/05/26 16:18:51 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

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

	std::string getName( void ) const;
	unsigned int getHp( void ) const;
	unsigned int getEp( void ) const;
	unsigned int getAd( void ) const;

	void setName(std::string const name);
	void setHp(unsigned int const hp);
	void setEp(unsigned int const ep);
	void setAd(unsigned int const ad);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};

#endif