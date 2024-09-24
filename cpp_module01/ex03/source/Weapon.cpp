/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:58:11 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:58:11 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
    //std::cout << "\033[1:32mConstructor { Weapon } Called\033[0m" << std::endl;
}

Weapon::~Weapon(void)
{
    //std::cout << "\033[1:31mWeapon { " << this->_type << " } destroyed\033[0m" << std::endl;
}

void Weapon::setType(std::string newType)
{
    this->_type = newType;
}

const std::string &Weapon::getType(void)
{
    return (this->_type);
}