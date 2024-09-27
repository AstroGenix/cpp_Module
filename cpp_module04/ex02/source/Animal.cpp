/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:31 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 15:15:34 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

// Default constructor
Animal::Animal(void) : _type("Unknown")
{
	std::cout << "\033[1;32mAnimal constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Parameterized constructor
Animal::Animal(const std::string& type) : _type(type)
{
	std::cout << "\033[1;32mAnimal parameterized constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy constructor
Animal::Animal(const Animal& copy) : _type(copy._type)
{
	std::cout << "\033[1;32mAnimal copy constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "\033[1;31mAnimal destructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy assignment operator
Animal& Animal::operator=(const Animal& copy)
{
	if (this != &copy) {
		this->_type = copy._type;
	}
	std::cout << "Animal copy assignment operator { " << this->_type << " } called" << std::endl;
	return (*this);
}

// Member function
void Animal::makeSound(void) const
{
	std::cout << "Animal { " << this->_type << " } makeSound called " << std::endl;
}