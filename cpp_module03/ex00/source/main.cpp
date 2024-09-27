/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:29:13 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 11:35:32 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
	// Creating ClapTrap objects
	ClapTrap Clappy("Clappy");
	ClapTrap Trappy("Trappy");

	// Display initial states
	std::cout << "\n\033[1;34mInitial States:\033[0m" << std::endl;
	Clappy.attack("target1");
	Trappy.attack("target2");

	// Test taking damage
	std::cout << "\n\033[1;34mTesting Taking Damage:\033[0m" << std::endl;
	Clappy.takeDamage(5);
	Trappy.takeDamage(15);

	// Test repairing
	std::cout << "\n\033[1;34mTesting Repairs:\033[0m" << std::endl;
	Clappy.beRepaired(10);
	Trappy.beRepaired(5);

	// Test attacking with insufficient energy
	std::cout << "\n\033[1;34mTesting Attacks with Insufficient Energy:\033[0m" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		Clappy.attack("Trappy");
	}

	// Test repairing with insufficient energy
	std::cout << "\n\033[1;34mTesting Repair with Insufficient Energy:\033[0m" << std::endl;
	Trappy.beRepaired(5);

	// Test taking damage until health is zero
	std::cout << "\n\033[1;34mTesting Taking Damage Until Health is Zero:\033[0m" << std::endl;
	Clappy.takeDamage(100);
	Clappy.attack("Trappy");
	Clappy.beRepaired(10);

	return 0;
}