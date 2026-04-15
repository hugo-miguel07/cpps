/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:20:07 by htavares          #+#    #+#             */
/*   Updated: 2026/04/15 19:01:02 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

bool parse_input(char **av)
{
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.length() <= 0 || s2.length() <= 0)
		return (false);
	return (true);
}

std::string getFileName(char *av)
{
	std::string filename = av;
	return (filename);
}

void replaceFile(std::ifstream &og, std::ofstream &nf, char *s1, char *s2)
{
	std::string str1 = s1;
	std::string str2 = s2;
	std::string linha;

	size_t idx;
	while (std::getline(og, linha))
	{
		idx = 0;
		while ((idx = linha.find(str1, idx)) != std::string::npos)
		{
			linha = linha.substr(0, idx) + str2 + linha.substr(idx + str1.length());
			idx += str2.length();
		}
		nf << linha << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::ifstream file;
	
	if (ac != 4)
		return (1);

	file.open(av[1]);
	if (!file.is_open())
		return (1);

	if (!parse_input(av))
		return (file.close(), 1);
		
	std::string nfilename = getFileName(av[1]) + ".replace";
	std::ofstream nfile(nfilename.c_str());

	replaceFile(file, nfile, av[2], av[3]);
	
	file.close();
	return (0);
}
