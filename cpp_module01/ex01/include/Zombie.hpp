/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:53:55 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:53:55 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		// Constructor
		Zombie(void);
		// Destructor
		~Zombie(void);
		// Getter
		void announce(void);
		// Setter
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif