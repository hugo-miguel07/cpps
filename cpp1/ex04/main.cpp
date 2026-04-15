/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:20:07 by htavares          #+#    #+#             */
/*   Updated: 2026/04/15 15:04:57 by htavares         ###   ########.fr       */
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

bool check_equality(std::string og, std::string comp)
{
	size_t idx = 0;

	while (idx < comp.length() && og[idx])
	{
		if (og[idx] != comp[idx])
			return (false);
		idx++;
	}
	if (idx == comp.length())
		return (true);
	return (false);
}

void strcheck_replace(std::string &og, std::string comp, std::string repl)
{
	size_t idx = 0;

	while (idx < og.length())
	{
		if (check_equality(&(og[idx]), comp))
		{
			size_t idxc = 0;
			while (idxc < comp.length())
			{
				og[idxc] = repl[idxc];
				idxc++;
				if (idxc >= repl.length())
					break ;
			}
		}
		idx++;
	}
}

void replaceFile(std::ifstream &og, std::ofstream &nf, char *s1, char *s2)
{
	std::string str1 = s1;
	std::string str2 = s2;
	std::string linha;

	while (std::getline(og, linha))
	{
		strcheck_replace(linha, str1, str2);
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
	std::ofstream nfile(nfilename);

	replaceFile(file, nfile, av[2], av[3]);
	
	file.close();
	return (0);
}
