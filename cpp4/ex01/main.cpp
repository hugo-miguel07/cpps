/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:15 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 17:20:44 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	Dog d;
	Cat c;

	std::cout << std::endl;
	std::cout << d.getType() << std::endl;
	d.makeSound();
	std::cout << c.getType() << std::endl;
	c.makeSound();

	std::cout << std::endl;

	d.setIdea("Dog idea 1");
	d.setIdea("Dog idea 2");
	d.setIdea("Dog idea 3");
	c.setIdea("Cat idea 1");
	c.setIdea("Cat idea 2");
	c.setIdea("Cat idea 3");

	Dog d_copy(d);
	Cat c_copy(c);

	std::cout << std::endl;

	d.setIdea("Dog idea changed");
	c.setIdea("Cat idea changed");

	std::cout << "Dog brain" << std::endl;
	d.printIdeas();
	std::cout << "Dog brain copy" << std::endl;
	d_copy.printIdeas();
	std::cout << std::endl;
	std::cout << "Cat brain" << std::endl;
	c.printIdeas();
	std::cout << "Cat brain copy" << std::endl;
	c_copy.printIdeas();

	std::cout << std::endl;

	Dog d_assign;
	Cat c_assign;
	d_assign = d;
	c_assign = c;

	std::cout << std::endl;

	std::cout << "Dog brain assigned" << std::endl;
	d_assign.printIdeas();
	std::cout << "Cat brain assigned" << std::endl;
	c_assign.printIdeas();

	std::cout << std::endl;

	return 0;
}
