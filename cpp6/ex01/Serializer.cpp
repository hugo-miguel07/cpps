/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-07-13 14:17:54 by htavares          #+#    #+#             */
/*   Updated: 2026-07-13 14:17:54 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ){}

Serializer::Serializer( Serializer const &s ){
	(void)s;
}

Serializer &Serializer::operator=( Serializer const &s ){
	(void)s;
	return (*this);
}

Serializer::~Serializer( void ){}

uintptr_t Serializer::serialize( Data *ptr ){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize( uintptr_t raw ){
	return (reinterpret_cast<Data *>(raw));
}