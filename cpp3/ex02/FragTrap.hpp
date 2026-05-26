/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:32:10 by htavares          #+#    #+#             */
/*   Updated: 2026/05/26 16:54:50 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
class FragTrap: public ClapTrap
{
	private:
	
	public:
	FragTrap(std::string name);
	FragTrap( void );
	~FragTrap();
	FragTrap(const FragTrap &f);
	FragTrap& operator=(const FragTrap& f);
	void highFivesGuys(void);
};

#endif