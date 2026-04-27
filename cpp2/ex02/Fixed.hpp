/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 09:40:27 by htavares          #+#    #+#             */
/*   Updated: 2026/04/27 13:49:24 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
	int val;
	static const int nfract = 8;
	
	public:
	Fixed( void );
	Fixed( const float val );
	Fixed( const int val );
	Fixed(const Fixed &f);
	Fixed& operator=(const Fixed& f);
	Fixed& operator+(const Fixed& f);
	Fixed& operator++(int);
	Fixed& operator++( void );
	Fixed& operator-(const Fixed& f);
	Fixed& operator--( int );
	Fixed& operator--( void );
	Fixed& operator*(const Fixed& f);
	Fixed& operator/(const Fixed& f);
	bool 	operator<(const Fixed& f);
	bool 	operator>(const Fixed& f);
	bool 	operator==(const Fixed& f);
	bool 	operator<=(const Fixed& f);
	bool 	operator>=(const Fixed& f);
	bool 	operator!=(const Fixed& f);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif