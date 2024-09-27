/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:16:29 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 15:31:43 by dberehov         ###   ########.fr       */
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

		// Operator
		Animal& operator=(const Animal& copy);

		// Member Functions
		virtual void    makeSound(void) const;
};

#endif