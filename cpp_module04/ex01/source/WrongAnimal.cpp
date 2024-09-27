/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:53 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 22:18:53 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal(void) : _type("Unknown")
{
	std::cout << "\033[1;32mWrongAnimal constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Parameterized constructor
WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{
	std::cout << "\033[1;32mWrongAnimal parameterized constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type)
{
	std::cout << "\033[1;32mWrongAnimal copy constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[1;31mWrongAnimal destructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout << "WrongAnimal copy assignment operator { " << this->_type << " } called" << std::endl;
	return (*this);
}

// Member function
void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal { " << this->_type << " } makeSound called " << std::endl;
}