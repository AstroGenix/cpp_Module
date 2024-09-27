/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:31 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 16:46:54 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

// Default constructor
AAnimal::AAnimal(void) : _type("Unknown")
{
	std::cout << "\033[1;32mAAnimal constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Parameterized constructor
AAnimal::AAnimal(const std::string& type) : _type(type)
{
	std::cout << "\033[1;32mAAnimal parameterized constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy constructor
AAnimal::AAnimal(const AAnimal& copy) : _type(copy._type)
{
	std::cout << "\033[1;32mAAnimal copy constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Destructor
AAnimal::~AAnimal(void)
{
	std::cout << "\033[1;31mAAnimal destructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy assignment operator
AAnimal& AAnimal::operator=(const AAnimal& copy)
{
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout << "AAnimal copy assignment operator { " << this->_type << " } called" << std::endl;
	return (*this);
}

// Member function
void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal { " << this->_type << " } makeSound called " << std::endl;
}