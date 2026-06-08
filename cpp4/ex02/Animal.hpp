/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:38:33 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:53:32 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class AAnimal
{
	protected:
	std::string type;

	public:
	AAnimal( void );
	virtual ~AAnimal();
	AAnimal(const AAnimal &a);
	AAnimal& operator=(const AAnimal& a);

	std::string getType( void ) const;
	virtual void makeSound( void ) const = 0;
};

#endif