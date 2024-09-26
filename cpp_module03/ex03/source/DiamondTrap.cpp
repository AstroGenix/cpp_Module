/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:55:56 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 20:55:56 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default")
{
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "\033[1;32mDiamondTrap constructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Parameterized constructor
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "\033[1;32mDiamondTrap named constructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
	std::cout << "\033[1;32mDiamondTrap copy { " << this->_name << " } called\033[0m" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[1;31mDiamondTrap destructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
        FragTrap::operator=(copy);
        ScavTrap::operator=(copy);
        this->_name = copy._name;
    }
    std::cout << "DiamondTrap assignment operator '=' { " << this->_name << " } called" << std::endl;
    return (*this);
}

// Member function
void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: \033[1;37m" << this->_name << "\033[0m, ClapTrap name: \033[1;37m" << ClapTrap::_name << "\033[0m" << std::endl;
}