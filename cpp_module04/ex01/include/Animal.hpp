/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:16:29 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 17:27:36 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

// Base Class
class Animal
{
	protected:
		std::string _type;

	public:
		// Constructor & Desctructor
		Animal(void);
		Animal(const std::string& type);
		Animal(const Animal& copy);
		virtual ~Animal(void);			// Virtual Destructor

		/*
		In C++, if a base class destructor is not marked as 'virtual', deleting an
		object of a derived class through a pointer to the base class will only call
		the base class destructor.

		Animal* a = new Dog();
		delete a;

		output:
		animal created
		dog created
		animal destroyed

		Missing 'dog destroyed'
		*/

		// Operator
		Animal& operator=(const Animal& copy);

		// Member Functions
		virtual void    makeSound(void) const;
};

#endif