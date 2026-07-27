/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-07-15 11:58:39 by htavares          #+#    #+#             */
/*   Updated: 2026-07-15 11:58:39 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>
#include <exception>

template<typename T>
class Array{
	private:

		T *array;
		unsigned int _size;
	
	public:

	class IsOutException : public std::exception
	{
		public:
			virtual const char* what() const throw(){
				return ("Invalid number for the array size");
			}
	};
		
	Array( void ): array(NULL), _size(0){}
		
	Array( unsigned int n ): array(new T[n]), _size(n){}
		
	Array( Array const &copy ): array(new T[copy._size]), _size(copy._size){
		for (unsigned int i = 0; i < copy._size; ++i)
			array[i] = copy.array[i];
	}
		
	Array &operator=(Array const &copy )
	{
		if (this != &copy)
		{
			delete[] array;
			array = new T[copy._size];
			_size = copy._size;
			for (unsigned int i = 0; i < copy._size; ++i)
				array[i] = copy.array[i];
		}
		return (*this);
	}
		
	~Array( void ){ delete[] array; }
		
	T &operator[](int i)
	{
		if (i < 0 || (unsigned int)i >= _size)
			throw IsOutException();
		return (array[i]);
	}
		
	unsigned int size( void ) const { return _size ; }
};
