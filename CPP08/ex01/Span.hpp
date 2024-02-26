/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:11:11 by ohaimad           #+#    #+#             */
/*   Updated: 2024/02/26 22:18:25 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <stdexcept>
#include <limits>

class Span {
private:
    std::vector<int> numbers;
    unsigned int maxSize;

public:
    Span();
    Span(const Span& copy);
    Span& operator=(const Span& obj);
    ~Span();

    Span(unsigned int N);
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    void    addNumbers(const std::vector<int>& nums);
};

#endif 