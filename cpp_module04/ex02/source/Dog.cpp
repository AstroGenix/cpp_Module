/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:42:20 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 16:48:09 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

// Default constructor
Dog::Dog(void) : AAnimal("Dog"), _brain(new Brain())
{
	std::cout << "\033[1;32mDog constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Parameterized constructor
Dog::Dog(const std::string& type) : AAnimal(type), _brain(new Brain())
{
	std::cout << "\033[1;32mDog parameterized constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog& copy) : AAnimal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "\033[1;32mDog copy constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Destructor
Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "\033[1;31mDog destructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy) {
		AAnimal::operator=(copy);
		delete this->_brain;					// Deletes old _brain
		this->_brain = new Brain(*copy._brain); // Creates deep copy
	}
	std::cout << "Dog copy assignment operator { " << this->_type << " } called" << std::endl;
	return *this;
}

// Member function
void Dog::makeSound(void) const
{
	std::cout << "{ " << this->_type << " } 🐩: Woof!" << std::endl;
}

void Dog::getIdea(void) const
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << i << " [ "<< this->_brain->ideas[i] << " ]" << std::endl;
	}
	std::cout << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100) {
        _brain->ideas[index] = idea;
    }
}