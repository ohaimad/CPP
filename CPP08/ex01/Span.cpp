/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:11:13 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/26 22:38:22 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxSize(0) {}
Span::Span(const Span& copy) : numbers(copy.numbers), maxSize(copy.maxSize){}
Span::~Span() {}
Span::Span(unsigned int N) : maxSize(N) {}
Span& Span::operator=(const Span& obj)
{
    if (this == &obj)
        return *this;
    maxSize = obj.maxSize;
    numbers = obj.numbers;
    return *this;
}

void Span::addNumber(int num)
{
    if (numbers.size() >= maxSize)
        throw std::out_of_range("Span is already full");
    numbers.push_back(num);
}

int Span::shortestSpan()
{
    if (numbers.size() <= 1)
        throw std::out_of_range("Cannot find span with less than 2 numbers");

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sortedNumbers.size() - 1; ++i) 
    {
        int span = sortedNumbers[i + 1] - sortedNumbers[i];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan()
{
    if (numbers.size() <= 1)
        throw std::out_of_range("Cannot find span with less than 2 numbers");
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    return sortedNumbers.back() - sortedNumbers.front();
}

void Span::addNumbers(const std::vector<int>& nums)
{
    if (numbers.size() + nums.size() > maxSize)
        throw std::out_of_range("Adding numbers exceeds Span capacity");

    for (std::vector<int>::const_iterator it = nums.begin(); it != nums.end(); ++it)
        numbers.push_back(*it);
}