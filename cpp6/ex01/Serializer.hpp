/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htavares <htavares@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-07-13 14:17:52 by htavares          #+#    #+#             */
/*   Updated: 2026-07-13 14:17:52 by htavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>

typedef struct s_data
{
	int apples;
	int oranges;
	int bananas;
}	Data;

class Serializer
{
	private:
	Serializer();
	~Serializer();
	Serializer(const Serializer &s);
	Serializer &operator=(const Serializer &s);

	public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};