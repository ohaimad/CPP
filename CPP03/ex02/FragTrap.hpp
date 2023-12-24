/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:04:36 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/24 23:13:27 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#pragma once

class FragTrap : public ClapTrap 
{
    public:
    // Constructors and destructor
    FragTrap(const std::string& name);
    virtual ~FragTrap();

    // Special capacity
    void highFivesGuys();
};

