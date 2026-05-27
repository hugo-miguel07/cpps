/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:38:33 by htavares          #+#    #+#             */
/*   Updated: 2026/05/27 14:38:30 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
	std::string type;

	public:
	WrongAnimal( void );
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &a);
	WrongAnimal& operator=(const WrongAnimal& a);

	std::string getType( void ) const;
	void makeSound( void ) const;
};

#endif