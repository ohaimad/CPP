/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <ohaimad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:49:26 by ohaimad           #+#    #+#             */
/*   Updated: 2023/12/24 22:55:35 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#pragma once

class ScavTrap : public ClapTrap
{
public:
    // Constructors and destructor
    ScavTrap(const std::string& name);
    virtual ~ScavTrap();

    // Special capacity
    void guardGate();
};

