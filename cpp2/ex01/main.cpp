/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 09:40:29 by htavares          #+#    #+#             */
/*   Updated: 2026/06/02 18:00:18 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;

std::cout << std::endl << std::endl;
std::cout << "a RawBits: " << a.getRawBits() << std::endl;
std::cout << "b RawBits: " << b.getRawBits() << std::endl;
std::cout << "c RawBits: " << c.getRawBits() << std::endl;
std::cout << "d RawBits: " << d.getRawBits() << std::endl;


std::cout << std::endl << std::endl;
std::cout << "a is " << a.toFloat() << " as float" << std::endl;
std::cout << "b is " << b.toFloat() << " as float" << std::endl;
std::cout << "c is " << c.toFloat() << " as float" << std::endl;
std::cout << "d is " << d.toFloat() << " as float" << std::endl;
return 0;
}
