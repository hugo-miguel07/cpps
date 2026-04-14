/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:45:16 by htavares          #+#    #+#             */
/*   Updated: 2026/04/14 15:28:29 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory Addresses:" << std::endl;
	std::cout << "\tstring: " << &str << std::endl;
	std::cout << "\tstringPTR: " << stringPTR << std::endl;
	std::cout << "\tstringREF: " << &stringREF << "\n" << std::endl;
	
	std::cout << "Variable values:" << std::endl;
	std::cout << "\tstring: " << str << std::endl;
	std::cout << "\tstringPTR: " << *stringPTR << std::endl;
	std::cout << "\tstringREF: " << stringREF << "\n" << std::endl;

	std::cout << "Vamos trocar o valor da string diretamente para"
				<< " verificar que que os adresses e os valores vao continuar iguais\n\n" << std::endl;

	str = "htavares test :)";

	std::cout << "Memory Addresses:" << std::endl;
	std::cout << "\tstring: " << &str << std::endl;
	std::cout << "\tstringPTR: " << stringPTR << std::endl;
	std::cout << "\tstringREF: " << &stringREF << "\n" << std::endl;
	
	std::cout << "Variable values:" << std::endl;
	std::cout << "\tstring: " << str << std::endl;
	std::cout << "\tstringPTR: " << *stringPTR << std::endl;
	std::cout << "\tstringREF: " << stringREF << "\n" << std::endl;
	
	return (0);
}
