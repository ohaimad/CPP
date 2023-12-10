/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:08:53 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/10 18:01:06 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl lbkaa; 
    if(ac != 2)
    {
        std::cerr << "Usage: " << av[0] << " <valid level> " << "\n";
        return 1;
    }
    if(!av[1])
        return(0);
    lbkaa.complain(av[1]);
}
