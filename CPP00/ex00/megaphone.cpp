/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:17:57 by ohaimad           #+#    #+#             */
/*   Updated: 2023/11/12 19:59:30 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

int main(int c ,char **v)
{
    if(c <= 1)
        std::cout << " LOUD AND UNBEARABLE FEEDBACK NOISE ";
    for(int i = 1; i < c; i++)
    {
        std::string str = v[i];
        for(unsigned long j = 0; j < str.size(); j++)
        {
            if(!isupper(str[j]))
                std::cout << (char)toupper(str[j]);
            else
                std::cout << str[j];
        }
    }
    std::cout << std::endl;
}
