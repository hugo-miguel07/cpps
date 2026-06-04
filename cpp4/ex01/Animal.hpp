/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:38:33 by htavares          #+#    #+#             */
/*   Updated: 2026/06/04 18:26:59 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <Brain.hpp>

class Animal
{
	protected:
	std::string type;

	public:
	Animal( void );
	virtual ~Animal();
	Animal(const Animal &a);
	Animal& operator=(const Animal& a);

	std::string getType( void ) const;
	virtual void makeSound( void ) const;
};

#endif