/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:42 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 16:48:00 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

// Default constructor
Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain())
{
	std::cout << "\033[1;32mCat constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Parameterized constructor
Cat::Cat(const std::string& type) : AAnimal(type), _brain(new Brain())
{
	std::cout << "\033[1;32mCat parameterized constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat& copy) : AAnimal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "\033[1;32mCat copy constructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Destructor
Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "\033[1;31mCat destructor { " << this->_type << " } called\033[0m" << std::endl;
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy) {
		AAnimal::operator=(copy);
		delete this->_brain;					// Deletes old _brain
		this->_brain = new Brain(*copy._brain); // Creates deep copy
	}
	std::cout << "Cat copy assignment operator { " << this->_type << " } called" << std::endl;
	return *this;
}

// Member function
void Cat::makeSound(void) const
{
	std::cout << "{ " << this->_type << " } 🐈: Meow!" << std::endl;
}

void Cat::getIdea(void) const
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << i << " [ "<< this->_brain->ideas[i] << " ]" << std::endl;
	}
	std::cout << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100) {
        _brain->ideas[index] = idea;
    }
}