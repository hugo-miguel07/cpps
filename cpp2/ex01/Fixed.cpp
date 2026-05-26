/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 09:40:24 by htavares          #+#    #+#             */
/*   Updated: 2026/05/26 11:59:25 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed( int val )
{
	std::cout << "Int constructor called" << std::endl;
	this->val = val << Fixed::nfract;
}

Fixed::Fixed( float val )
{
	std::cout << "Float constructor called" << std::endl;
	this->val = roundf(val * (1 << Fixed::nfract));
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		this->val = f.val;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}

float	Fixed::toFloat( void ) const
{
	return (((float)this->val) / (1 << Fixed::nfract));
}

int	Fixed::toInt( void ) const
{
	return (this->val >> Fixed::nfract);
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}
