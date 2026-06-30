/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 17:53:00 by htavares          #+#    #+#             */
/*   Updated: 2026/06/30 12:48:48 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Bureaucrat cj("CJ", 15);
		Bureaucrat tenpenny("Officer", 1);
		std::cout << cj << std::endl;

		PresidentialPardonForm presi("Smoke");
		RobotomyRequestForm robo("Sweet");
		ShruberryCreationForm berry("Ryder");

		cj.signForm(presi);
		cj.signForm(robo);
		cj.signForm(berry);
		robo.execute(cj);
		robo.execute(cj);
		robo.execute(cj);
		berry.execute(cj);
		presi.execute(tenpenny);

		presi.execute(cj);
		std::cout << "print thats not gonna print :)" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ogloc("Og Loc", 15);

		PresidentialPardonForm presi("Og Loc");
		presi.execute(ogloc);
		std::cout << "print thats not gonna print :)" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
