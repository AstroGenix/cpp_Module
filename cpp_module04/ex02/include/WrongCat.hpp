/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:15:31 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 23:15:31 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructor & Desctructor
		WrongCat(void);
		WrongCat(const std::string& type);
		WrongCat(const WrongCat& copy);
		~WrongCat(void);

		// Operator
		WrongCat& operator=(const WrongCat& copy);

		// Member Functions
		void	makeSound(void) const;
};

#endif