/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:42:20 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 23:42:20 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

// Default constructor
Dog::Dog(void) : Animal("Dog")
{
    std::cout << "\033[1;32mDog constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Parameterized constructor
Dog::Dog(const std::string& type) : Animal(type)
{
    std::cout << "\033[1;32mDog parameterized constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "\033[1;32mDog copy constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Destructor
Dog::~Dog(void)
{
    std::cout << "\033[1;31mDog destructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& copy)
{
    if (this != &copy) {
        Animal::operator=(copy);
    }
    std::cout << "Dog copy assignment operator { " << this->_type << " } called" << std::endl;
    return *this;
}

// Member function
void Dog::makeSound(void) const
{
    std::cout << "{ " << this->_type << " } 🐩: Woof!" << std::endl;
}