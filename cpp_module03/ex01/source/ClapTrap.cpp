/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:29:10 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 11:34:37 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(void) : _name("Default"), _health(10), _energy(10), _damage(0)
{
	std::cout << "\033[1;32mClapTrap constructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(const std::string& name) : _name(name), _health(10), _energy(10), _damage(0)
{
	std::cout << "\033[1;32mClapTrap named constructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), _health(copy._health), _energy(copy._energy), _damage(copy._damage)
{
	std::cout << "\033[1;32mClapTrap copy { " << this->_name << " } called\033[0m" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[1;31mClapTrap destructor { " << this->_name << " } called\033[0m" << std::endl;
}

// Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_health = copy._health;
		_energy = copy._energy;
		_damage = copy._damage;
	}
	std::cout << "ClapTrap assignment operator '=' { " << this->_name << " } called" << std::endl;	
	return (*this);
}

// Member functions
void ClapTrap::attack(const std::string& target)
{
	if (_health <= 0)
	{
		std::cout << "ClapTrap \033[1;37m" << _name << "\033[0m cannot attack because it has no hit points left." << std::endl;
		return;
	}
	if (_energy <= 0)
	{
		std::cout << "ClapTrap \033[1;37m" << _name << "\033[0m cannot attack because it has no energy points left." << std::endl;
		return;
	}

	_energy -= 1;
	std::cout << "ClapTrap \033[1;37m" << _name << "\033[0m attacks \033[1;37m" << target 
			  << "\033[0m, causing \033[1;37m" << _damage << "\033[0m points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int ammount)
{
	if (_health <= 0)
	{
		std::cout << "ClapTrap \033[1;37m" << _name << "\033[0m cannot take damage because it has no hit points left." << std::endl;
		return;
	}
	if (ammount >= _health)
	{
		_health = 0;
	}
	else
	{
		_health -= ammount;
	}

	std::cout << "ClapTrap \033[1;37m" << _name << "\033[0m takes \033[1;37m" << ammount << "\033[0m points of damage! "
			  << "Remaining health: \033[1;37m" << _health << "\033[0m." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_health <= 0)
	{
		std::cout << "ClapTrap \033[1;37m" << _name << "\033[0m cannot be repaired because it has no hit points left." << std::endl;
		return;
	}
	if (_energy <= 0)
	{
		std::cout << "ClapTrap \033[1;37m" << _name << "\033[0m cannot be repaired because it has no energy points left." << std::endl;
		return;
	}

	_energy -= 1;
	_health += amount;
	std::cout << "ClapTrap \033[1;37m" << _name << "\033[0m is repaired by \033[1;37m" << amount << "\033[0m points! "
			  << "New health: \033[1;37m" << _health << "\033[0m." << std::endl;
}