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

#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
    Array<int> empty;
    std::cout << "empty size = " << empty.size() << std::endl;

    Array<int> numbers(5);
    for (unsigned int i = 0; i < numbers.size(); ++i)
        numbers[i] = static_cast<int>(i * 10);

    Array<int> copy(numbers);
    Array<int> assigned;
    assigned = numbers;

    std::cout << "numbers: ";
    for (unsigned int i = 0; i < numbers.size(); ++i)
        std::cout << numbers[i] << ' ';
    std::cout << std::endl;

    std::cout << "copy: ";
    for (unsigned int i = 0; i < copy.size(); ++i)
        std::cout << copy[i] << ' ';
    std::cout << std::endl;

    std::cout << "assigned: ";
    for (unsigned int i = 0; i < assigned.size(); ++i)
        std::cout << assigned[i] << ' ';
    std::cout << std::endl;

    Array<std::string> words(3);
    words[0] = "one";
    words[1] = "two";
    words[2] = "three";

    std::cout << "words: ";
    for (unsigned int i = 0; i < words.size(); ++i)
        std::cout << words[i] << ' ';
    std::cout << std::endl;

    try
    {
        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}