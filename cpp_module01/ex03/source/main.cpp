/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:58:13 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:58:13 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

/*
HumanA Class:
 -- HumanA is a class that represents a human who always has a weapon.
 	The weapon is passed to HumanA during construction and is stored as a REFERENCE.
Reference (HumanA):
 -- Use a reference when the object should always have a valid weapon,
	and the weapon is known at construction time.
	This ensures consistency and simplifies the code.
HumanB Class:
 -- HumanB is a class that represents a human who may or may not have a weapon initially.
	The weapon can be set later using the setWeapon method and is stored as a POINTER.
Pointer (HumanB):
 -- Use a pointer when the object may or may not have a weapon initially,
 	and the weapon can be set or changed later.
	This provides flexibility and allows for optionality.
*/

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
		std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}