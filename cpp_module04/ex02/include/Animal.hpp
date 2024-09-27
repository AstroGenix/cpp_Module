/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:16:29 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 16:46:34 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

// Base Class
class AAnimal
{
	protected:
		std::string _type;

	public:
		// Constructor & Desctructor
		AAnimal(void);
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& copy);
		virtual ~AAnimal(void);			// Virtual Destructor

		// Operator
		AAnimal& operator=(const AAnimal& copy);

		// Member Functions
		virtual void    makeSound(void) const = 0;
};

#endif