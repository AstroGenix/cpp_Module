/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:40:08 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 11:13:17 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(void)
{
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "\033[1;32mScavTrap constructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Parameterized constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "\033[1;32mScavTrap named constructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "\033[1;32mScavTrap copy { " << this->_name << " } called\033[0m" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[1;31mScavTrap destructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	if (this != &copy)
	{
		ClapTrap::operator=(copy);
	}
	std::cout << "ScavTrap assignment operator '=' { " << this->_name << " } called" << std::endl;	
	return (*this);
}

// Member functions
void ScavTrap::guardGate(void)
{
	if (this->_health <= 0)
	{
		std::cout << "ScavTrap \033[1;37m" << _name << "\033[0m cannot enter 'Gate keeper mode' because it has no hit points left." << std::endl;
	}

	std::cout << "ScavTrap \033[1;37m" << _name << "\033[0m has entered 'Gate keeper mode'." << std::endl;
}

// Override attack method
void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap \033[1;37m" << _name << "\033[0m struck \033[1;37m" << target 
			  << "\033[0m and dealt \033[1;37m" << _damage << "\033[0m points of damage" << std::endl;
}