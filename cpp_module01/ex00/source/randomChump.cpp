/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:36:55 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:36:55 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/*
Memory Management
 -- Allocates memory on the stack.The object is automatically
 	destroyed when the function scope ends.
Lifetime
 -- The 'Zombie' object is destroyed when the function ends.
 	It cannot be used outside the function.
Usage
 -- Use for temporary objects that only need to exist within
	the function.
Return Type
 -- Returns void and does not return the created Zombie.
*/

void randomChump(std::string name)
{
	Zombie name_z = Zombie(name);
	name_z.announce();
}