/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:33:37 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 20:33:37 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(void)
{
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "\033[1;32mFragTrap constructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Parameterized constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "\033[1;32mFragTrap named constructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "\033[1;32mFragTrap copy { " << this->_name << " } called\033[0m" << std::endl;
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "\033[1;31mFragTrap destructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Assignment operator
FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
	{
		ClapTrap::operator=(copy);
	}
	std::cout << "FragTrap assignment operator '=' { " << this->_name << " } called" << std::endl;	
	return (*this);
}

// Member functions
void FragTrap::highFiveGuys(void)
{
	if (this->_health <= 0)
	{
		std::cout << "FragTrap \033[1;37m" << _name << "\033[0m cannot high five because it has no hit points left." << std::endl;
	}

	std::cout << "FragTrap \033[1;37m" << _name << "\033[0m has delivered a high five." << std::endl;
}

// Override attack method
void FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap \033[1;37m" << _name << "\033[0m high-fived \033[1;37m" << target 
			  << "\033[0m dealing \033[1;37m" << _damage << "\033[0m points of damage" << std::endl;
}