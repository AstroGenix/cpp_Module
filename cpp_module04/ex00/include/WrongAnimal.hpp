/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:17:13 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 22:17:13 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

// Base Class
class WrongAnimal
{
	protected:
		std::string _type;

	public:
		// Constructor & Desctructor
		WrongAnimal(void);
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& copy);
		virtual ~WrongAnimal(void);

		// Operator
		WrongAnimal& operator=(const WrongAnimal& copy);

		// Member Functions
		void    makeSound(void) const;  // Not virtual
};

#endif