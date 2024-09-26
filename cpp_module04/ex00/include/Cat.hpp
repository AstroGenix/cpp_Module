/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:16:39 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 22:16:39 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		// Constructor & Desctructor
		Cat(void);
		Cat(const std::string& type);
		Cat(const Cat& copy);
		~Cat(void);

		// Operator
		Cat& operator=(const Cat& copy);

		// Member Functions
		void	makeSound(void) const;
};

#endif