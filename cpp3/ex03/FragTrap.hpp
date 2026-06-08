/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:32:10 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:08:07 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
class FragTrap: virtual public ClapTrap
{
	public:
	FragTrap(std::string name);
	FragTrap( void );
	~FragTrap();
	FragTrap(const FragTrap &f);
	FragTrap& operator=(const FragTrap& f);
	void highFivesGuys(void);
};

#endif