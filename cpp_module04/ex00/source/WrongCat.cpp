/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:19:24 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 22:19:24 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "\033[1;32mWrongCat constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Parameterized constructor
WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)
{
	std::cout << "\033[1;32mWrongCat parameterized constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "\033[1;32mWrongCat copy constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << "\033[1;31mWrongCat destructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	if (this != &copy) {
		WrongAnimal::operator=(copy);
	}
	std::cout << "WrongCat copy assignment operator { " << this->_type << " } called" << std::endl;
	return *this;
}

// Member function
void WrongCat::makeSound(void) const
{
	std::cout << "{ " << this->_type << " } 🐈: Wrong Meow!" << std::endl;
}