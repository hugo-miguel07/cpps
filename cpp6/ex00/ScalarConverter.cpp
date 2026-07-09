/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 13:14:13 by htavares          #+#    #+#             */
/*   Updated: 2026/07/09 18:16:29 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{}

ScalarConverter::~ScalarConverter()
{}

static bool ispseudo(std::string const &unconverted)
{
	return (unconverted == "nan" || unconverted == "nanf" || unconverted == "+inf" || unconverted == "+inff"
		|| unconverted == "-inf" || unconverted == "-inff");
}

static bool ischar(std::string const &unconverted)
{
	return (unconverted.length() == 1 && !isdigit(unconverted[0]));
}

static bool isint(std::string const &unconverted)
{
	size_t	i;

	i = 0;
	if (unconverted[i] == '+' || unconverted[i] == '-')
		i++;
	if (i >= unconverted.length())
		return (false);
	while (i < unconverted.length())
	{
		if (!isdigit(unconverted[i]))
			return (false);
		i++;
	}
	std::stringstream ss(unconverted);
	int num;
	if (!(ss >> num))
		return (false);
	return (true);
}

static bool isfloat(std::string const &unconverted)
{
	size_t	i;

	i = 0;
	if (unconverted[i] == '+' || unconverted[i] == '-')
		i++;
	if (i >= unconverted.length())
		return (false);
	while (i < unconverted.length())
	{
		if (!isdigit(unconverted[i]) && (unconverted[i] != 'f'))
			return (false);
		i++;
	}
	if (unconverted[i] != 'f')
		return (false);
	while (i < unconverted.length())
	{
		if (!isdigit(unconverted[i]))
			return (false);
		i++;
	}
	std::stringstream ss(unconverted);
	float num;
	if (!(ss >> num))
		return (false);
	return (true);
}

static bool isdouble(std::string const &unconverted)
{
	size_t	i;

	i = 0;
	if (unconverted[i] == '+' || unconverted[i] == '-')
		i++;
	if (i >= unconverted.length())
		return (false);
	while (i < unconverted.length())
	{
		if (!isdigit(unconverted[i]))
			return (false);
		i++;
	}
	std::stringstream ss(unconverted);
	double num;
	if (!(ss >> num))
		return (false);
	return (true);
}

static void pseudoconv(std::string const &unconverted)
{
	
}

static void charconv(std::string const &unconverted)
{
}

static void intconv(std::string const &unconverted)
{
	
}


static void floatconv(std::string const &unconverted)
{
	
}

static void doubleconv(std::string const &unconverted)
{
	
}

void ScalarConverter::convert(std::string const &unconverted)
{
	if (unconverted.empty())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}

	if (ispseudo(unconverted))
		pseudoconv(unconverted);
	else if (ischar(unconverted))
		charconv(unconverted);
	else if (isint(unconverted))
		intconv(unconverted);
	else if (isfloat(unconverted))
		floatconv(unconverted);
	else if (isdouble(unconverted))
		doubleconv(unconverted);
}
