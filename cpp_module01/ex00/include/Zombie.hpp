/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:37:08 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:37:08 by dberehov         ###   ########.fr       */
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
		Zombie(std::string name);
		// Destructor
		~Zombie(void);
		// Getter
		void announce(void);
};

//Returns pointer to Zombie object allocated with new
Zombie	*newZombie(std::string name);
//Creates new Zombie stored on the stack, which announces itself
void	randomChump(std::string name);

#endif