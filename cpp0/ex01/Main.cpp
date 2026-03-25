/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:45:04 by htavares          #+#    #+#             */
/*   Updated: 2026/03/25 13:06:34 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void print_options1(void)
{
	std::cout << "Welcome to out Awesome PhoneBook 😎" << std::endl;
	std::cout << "________________________________" << std::endl;
	std::cout << "Options:\n" << std::endl;
	std::cout << "\"ADD\"  \"SEARCH\"  \"EXIT\"\n" << std::endl;
}

int main(void)
{
	PhoneBook phonebook;
	std::string input;

	while(42)
	{
		print_options1();
		std::cout << "input:";
		getline(std::cin, input);
		std::cout << std::endl;
		if (input == "ADD")
			phonebook.add_option();
		else if (input == "SEARCH")
			phonebook.search_option();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid input, try again :)" << std::endl;
	}
	std::cout << "Goodbye 😁👋" << std::endl;
	return (0);
}
