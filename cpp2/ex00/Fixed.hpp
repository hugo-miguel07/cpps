/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 09:40:27 by htavares          #+#    #+#             */
/*   Updated: 2026/04/27 11:31:32 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>

class Fixed
{
	private:
	int val;
	static const int nfract = 8;
	
	public:
	Fixed( void );
	Fixed(const Fixed &f);
	Fixed& operator=(const Fixed& f);
	~Fixed();
	int		getRawBits( void );
	void	setRawBits( int const raw );
};

#endif