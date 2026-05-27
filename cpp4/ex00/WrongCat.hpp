/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:38:37 by htavares          #+#    #+#             */
/*   Updated: 2026/05/27 14:38:03 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat( void );
	~WrongCat();
	WrongCat(const WrongCat &c);
	WrongCat& operator=(const WrongCat& c);
	void WrongCat::makeSound( void ) const;
};

#endif