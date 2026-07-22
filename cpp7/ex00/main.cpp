/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-07-13 16:58:37 by htavares          #+#    #+#             */
/*   Updated: 2026-07-13 16:58:37 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 42;
	int b = 7;

	::swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "min: " << ::min( a, b ) << std::endl;
	std::cout << "max: " << ::max( a, b ) << std::endl;

	std::string l = "Lucas";
	std::string t = "Tanner";
	
	::swap(l, t);
	std::cout << "l: " << l << ", t: " << t << std::endl;
	std::cout << "min: " << ::min( l, t ) << std::endl;
	std::cout << "max: " << ::max( l, t ) << std::endl;

	float f1 = 1.4;
	float f2 = 3.6;

	::swap( f1, f2 );
	std::cout << "f1: " << f1 << ", f2: " << f2 << std::endl;
	std::cout << "min: " << ::min( f1, f2 ) << std::endl;
	std::cout << "max: " << ::max( f1, f2 ) << std::endl;

	return (0);
}
