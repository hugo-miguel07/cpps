/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:04:15 by htavares          #+#    #+#             */
/*   Updated: 2026/06/08 17:26:52 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	// AAnimal a;

	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << std::endl;

	std::cout << dog->getType() << std::endl;
	dog->makeSound();

	std::cout << cat->getType() << std::endl;
	cat->makeSound();

	std::cout << std::endl;

	delete dog;
	delete cat;

	return 0;
}
