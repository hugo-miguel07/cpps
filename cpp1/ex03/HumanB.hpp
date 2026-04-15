/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:56:16 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 21:27:57 by htavares         ###   ########.fr       */
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
	void attack();
	void setWeapon(Weapon weapon);
};

#endif