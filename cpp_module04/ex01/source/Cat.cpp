/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:42 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 22:18:42 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

// Default constructor
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "\033[1;32mCat constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Parameterized constructor
Cat::Cat(const std::string& type) : Animal(type)
{
	std::cout << "\033[1;32mCat parameterized constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "\033[1;32mCat copy constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Destructor
Cat::~Cat(void)
{
	std::cout << "\033[1;31mCat destructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy) {
		Animal::operator=(copy);
	}
	std::cout << "Cat copy assignment operator { " << this->_type << " } called" << std::endl;
	return *this;
}

// Member function
void Cat::makeSound(void) const
{
	std::cout << "{ " << this->_type << " } 🐈: Meow!" << std::endl;
}