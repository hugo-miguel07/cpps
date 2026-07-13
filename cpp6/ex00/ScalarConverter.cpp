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
#include <cmath>
#include <limits>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

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


static std::string format_number(double value)
{
	std::ostringstream	oss;
	std::string			result;

	oss << value;
	result = oss.str();
	if (result.find('.') == std::string::npos && result.find('e') == std::string::npos
		&& result.find('E') == std::string::npos)
		result += ".0";
	return (result);
}

static void print_char(double value)
{
	if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(value))))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

static void print_int(double value)
{
	if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<int>::min()
		|| value > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static void print_float(double value)
{
	if (std::isnan(value))
		std::cout << "float: nanf" << std::endl;
	else if (std::isinf(value))
		std::cout << "float: " << (value < 0 ? "-inff" : "+inff") << std::endl;
	else
		std::cout << "float: " << format_number(static_cast<float>(value)) << "f" << std::endl;
}

static void print_double(double value)
{
	if (std::isnan(value))
		std::cout << "double: nan" << std::endl;
	else if (std::isinf(value))
		std::cout << "double: " << (value < 0 ? "-inf" : "+inf") << std::endl;
	else
		std::cout << "double: " << format_number(value) << std::endl;
}

static void pseudoconv(std::string const &unconverted)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (unconverted == "nan" || unconverted == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (unconverted == "+inf" || unconverted == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

static void charconv(std::string const &unconverted)
{
	double	value;

	value = static_cast<double>(unconverted[0]);
	print_char(value);
	print_int(value);
	print_float(value);
	print_double(value);
}

static void intconv(std::string const &unconverted)
{
	double	value;
	int		number;
	std::stringstream	ss(unconverted);

	ss >> number;
	value = static_cast<double>(number);
	print_char(value);
	print_int(value);
	print_float(value);
	print_double(value);
}


static void floatconv(std::string const &unconverted)
{
	double	value;
	std::stringstream	ss(unconverted.substr(0, unconverted.length() - 1));
	float	number;

	ss >> number;
	value = static_cast<double>(number);
	print_char(value);
	print_int(value);
	print_float(value);
	print_double(value);
}

static void doubleconv(std::string const &unconverted)
{
	double	value;
	std::stringstream	ss(unconverted);

	ss >> value;
	print_char(value);
	print_int(value);
	print_float(value);
	print_double(value);
}

void ScalarConverter::convert(std::string const &unconverted)
{
	if (unconverted.empty())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
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
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}