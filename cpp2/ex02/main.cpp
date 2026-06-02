/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 09:40:29 by htavares          #+#    #+#             */
/*   Updated: 2026/06/02 18:14:42 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

std::cout << std::endl << std::endl;

Fixed const c = Fixed(7.02f);
std::cout << "a : " << a << std::endl;
std::cout << "c : " << c << std::endl;
std::cout << "min between a and c: "<< Fixed::min( a, c ) << std::endl;
std::cout << "a == c : "<< (a == c) << std::endl;
std::cout << "a != c : "<< (a != c) << std::endl;
std::cout << "a < c : "<< (a < c) << std::endl;
std::cout << "a > c : "<< (a > c) << std::endl;
std::cout << "a <= c : "<< (a <= c) << std::endl;
std::cout << "a >= c : "<< (a >= c) << std::endl;
std::cout << "a * c: "<< a * c << std::endl;
std::cout << "a / c: "<< a / c << std::endl;
std::cout << "a + c: "<< a + c << std::endl;
std::cout << "a - c: "<< a - c << std::endl;
std::cout << "a * c: "<< a * c << std::endl;

return (0);
}
