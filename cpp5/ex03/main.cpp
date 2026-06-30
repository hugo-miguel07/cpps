/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 17:53:00 by htavares          #+#    #+#             */
/*   Updated: 2026/06/30 13:37:57 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
    Intern someRandomIntern;
    Bureaucrat boss("President", 1);
    AForm* form;

    
    std::cout << "\n--- Test 1: Successful Robotomy Creation ---" << std::endl;
    form = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *form << std::endl;
    boss.signForm(*form);
    form->execute(boss);
    delete form;


    std::cout << "\n--- Test 2: Successful Shrubbery Creation ---" << std::endl;
    form = someRandomIntern.makeForm("shruberry request", "backyard");
    boss.signForm(*form);
    delete form;


    std::cout << "\n--- Test 3: Successful Pardon Creation ---" << std::endl;
    form = someRandomIntern.makeForm("presidential request", "Marvin");
    boss.signForm(*form);
    delete form;

    std::cout << "\n--- Test 4: Invalid Form Name ---" << std::endl;
	try
	{
		form = someRandomIntern.makeForm("Paddle request", "Boss");
		std::cout << "program should catch the error before this print" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
    return (0);
}
