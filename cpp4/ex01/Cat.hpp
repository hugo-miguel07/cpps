/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:38:37 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 15:35:04 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain *brain;

	public:
	Cat( void );
	~Cat();
	Cat(const Cat &c);
	Cat& operator=(const Cat& c);
	void makeSound( void ) const;
	void setIdea(const std::string &idea);
	void printIdeas(void) const;
};

#endif