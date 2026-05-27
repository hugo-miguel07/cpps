/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:38:37 by htavares          #+#    #+#             */
/*   Updated: 2026/05/27 14:39:09 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat( void );
	~Cat();
	Cat(const Cat &c);
	Cat& operator=(const Cat& c);
	void makeSound( void ) const;
};

#endif