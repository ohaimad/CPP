/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:11:13 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/20 13:13:06 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N) {}

void Span::addNumber(int num) {
    if (numbers.size() >= maxSize)
        throw std::out_of_range("Span is already full");
    numbers.push_back(num);
}

int Span::shortestSpan() const {
    if (numbers.size() <= 1)
        throw std::out_of_range("Cannot find span with less than 2 numbers");

    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        int span = numbers[i + 1] - numbers[i];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan() const {
    if (numbers.size() <= 1)
        throw std::out_of_range("Cannot find span with less than 2 numbers");

    int longest = std::numeric_limits<int>::min();
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        int span = numbers[i + 1] - numbers[i];
        if (span > longest)
            longest = span;
    }
    return longest;
}
