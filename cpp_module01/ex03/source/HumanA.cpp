/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:58:05 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:58:05 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "\033[1;32mConstructor 'HumanA' { " << name << " : ";
	std::cout << weapon.getType() << " } created\033[0m" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "\033[1;31mDestructor  'HumanA' { " << this->_name << " } destroyed\033[0m" << std::endl;
}


void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}