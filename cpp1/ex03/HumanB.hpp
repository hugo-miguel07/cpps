/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:56:16 by htavares          #+#    #+#             */
/*   Updated: 2026/04/15 12:55:58 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
	std::string name;
	Weapon *weapon;
	
	public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &weapon);
};

#endif