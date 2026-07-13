/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-07-06 11:55:35 by htavares          #+#    #+#             */
/*   Updated: 2026-07-06 11:55:35 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main (void)
{

	Data fruits;

	fruits.apples = 16;
	fruits.oranges = 25;
	fruits.bananas = 30;

	Data *ptr = &fruits;
	std::cout << "Original pointer: " << ptr << std::endl;
	std::cout << "Original data: apples=" << ptr->apples << ", oranges="
		<< ptr->oranges << ", " << "bananas," << ptr->bananas<< std::endl;
	
	uintptr_t raw = Serializer::serialize(ptr);
	std::cout << "\nSerialized (as number): " << raw << std::endl;

	Data *result = Serializer::deserialize(raw);
	std::cout << "\nDeserialized pointer: " << result << std::endl;
	std::cout << "Deserialized data: " << ptr->apples << ", oranges="
		<< ptr->oranges << ", " << "bananas," << ptr->bananas<< std::endl;

	if (ptr == result)
		std::cout << "Both pointers are equal! :)" << std::endl;
	else
		std::cout << "Pointers have different values, WROONG!! ;(" << std::endl;
	return (0);
}
