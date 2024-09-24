/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:36:43 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:36:43 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/*
Memory Management
 -- Allocates memory on the heap. The caller is responsible
 	for deleting the object.
Lifetime
 -- The 'Zombie' object persists after the function call ends.
 	The pointer can be used outside the function.
Usage
 -- Use when the object needs to persist beyond the scope of
 	the function or be used outside of the function.
Return Type
 -- Returns a pointer to a Zombie.
*/

Zombie* newZombie(std::string name)
{
	return(new Zombie(name));
}