/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad <ohaimad@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:16:59 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/10 18:00:08 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
    (void)av;
    if(ac != 1)
        return 1;
    Harl lbka;

    lbka.complain("DEBUG");
    lbka.complain("INFO");
    lbka.complain("WARNING");
    lbka.complain("ERROR");
}
