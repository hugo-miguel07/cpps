/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 09:40:24 by htavares          #+#    #+#             */
/*   Updated: 2026/04/30 14:55:20 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void )
{
	//std::cout << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed( int val )
{
	//std::cout << "Int constructor called" << std::endl;
	this->val = val << this->nfract;
}

Fixed::Fixed( float val )
{
	//std::cout << "Float constructor called" << std::endl;
	this->val = roundf(val * (1 << this->nfract));
}

Fixed::Fixed(const Fixed &f)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& f)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		this->val = f.val;
	return (*this);
}

Fixed Fixed::operator+(const Fixed& f) const
{
	Fixed result;
	int resval;

	resval = this->getRawBits() + f.getRawBits();
	result.setRawBits(resval);
	return (result);
}

Fixed Fixed::operator++(int)
{
	Fixed previous(*this);
	this->val += (1 << nfract);
	return (previous);
}

Fixed &Fixed::operator++( void )
{
	this->val += (1 << nfract);
	return (*this);
}

Fixed Fixed::operator-(const Fixed& f) const
{
	Fixed result;
	int resval;

	resval = this->getRawBits() - f.getRawBits();
	result.setRawBits(resval);
	return (result);
}

Fixed Fixed::operator--( int )
{
	Fixed previous(*this);
	this->val -= (1 << nfract);
	return (previous);
}

Fixed &Fixed::operator--( void )
{
	this->val -= (1 << nfract);
	return (*this);
}

Fixed Fixed::operator*(const Fixed& f) const
{
	Fixed result;
	int resval;

	resval = (this->getRawBits() * f.getRawBits()) >> this->nfract;
	result.setRawBits(resval);
	return (result);
}

Fixed Fixed::operator/(const Fixed& f) const
{
	Fixed result;
	int resval;

	resval = (this->getRawBits() << this->nfract) / f.getRawBits();
	result.setRawBits(resval);
	return (result);
}

bool Fixed::operator<(const Fixed& f) const
{
	bool res = this->getRawBits() < f.getRawBits();
	return (res);
}

bool Fixed::operator>(const Fixed& f) const
{
	bool res = this->getRawBits() > f.getRawBits();
	return (res);
}

bool Fixed::operator==(const Fixed& f) const
{
	bool res = this->getRawBits() == f.getRawBits();
	return (res);
}

bool Fixed::operator<=(const Fixed& f) const
{
	bool res = this->getRawBits() <= f.getRawBits();
	return (res);
}

bool Fixed::operator>=(const Fixed& f) const
{
	bool res = this->getRawBits() >= f.getRawBits();
	return (res);
}

bool Fixed::operator!=(const Fixed& f) const
{
	bool res = this->getRawBits() != f.getRawBits();
	return (res);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}

float	Fixed::toFloat( void ) const
{
	return (((float)this->val) / (1 << nfract));
}

int	Fixed::toInt( void ) const
{
	return (this->val >> 8);
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}
