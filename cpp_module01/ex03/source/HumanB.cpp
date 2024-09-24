/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:58:08 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:58:08 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << "\033[1;32mConstructor 'HumanB' { " << name << " } created\033[0m" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "\033[1;31mDestructor  'HumanB' { " << this->_name << " } destroyed\033[0m" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}