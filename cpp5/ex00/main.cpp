/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 17:53:00 by htavares          #+#    #+#             */
/*   Updated: 2026/06/24 16:59:39 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("hugo", 42);
		std::cout << a << std::endl;

		a.addGrade();
		std::cout << a << std::endl;

		a.takeGrade();
		std::cout << a << std::endl;

		Bureaucrat b("roberto", 0);
		std::cout << b << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat c("CJ", 149);
		std::cout << c << std::endl;

		c.takeGrade();
		c.takeGrade();
		std::cout << "womp womp" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	

	return (0);
}
