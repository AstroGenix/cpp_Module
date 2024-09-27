/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:15:37 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 15:50:08 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		// Constructor & Desctructor
		Dog(void);
		Dog(const std::string& type);
		Dog(const Dog& copy);
		~Dog(void);

		// Operator
		Dog& operator=(const Dog& copy);

		// Member Functions
		void	makeSound(void) const;
		void	getIdea(void) const;
		void	setIdea(int index, std::string idea);
};

#endif