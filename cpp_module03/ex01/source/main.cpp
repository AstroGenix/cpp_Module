/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:29:13 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 13:29:13 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
	// Creating ClapTrap objects
	ClapTrap Clappy("Clappy");
	ClapTrap Trappy("Trappy");

	// Display initial states
	std::cout << "\nInitial States:" << std::endl;
	Clappy.attack("target1");
	Trappy.attack("target2");

	// Test attacking
	std::cout << "\nTesting Attacks:" << std::endl;
	Clappy.attack("Trappy");
	Trappy.attack("Clappy");

	// Test taking damage
	std::cout << "\nTesting Taking Damage:" << std::endl;
	Clappy.takeDamage(5);
	Trappy.takeDamage(15);

	// Test repairing
	std::cout << "\nTesting Repairs:" << std::endl;
	Clappy.beRepaired(10);
	Trappy.beRepaired(5);

	// Test attacking with insufficient energy
	std::cout << "\nTesting Attacks with Insufficient Energy:" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		Clappy.attack("Trappy");
	}

	// Test repairing with insufficient energy
	std::cout << "\nTesting Repairs with Insufficient Energy:" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		Trappy.beRepaired(5);
	}

	// Test taking damage until health is zero
	std::cout << "\nTesting Taking Damage Until Health is Zero:" << std::endl;
	Clappy.takeDamage(100);
	Clappy.attack("Trappy");
	Clappy.beRepaired(10);

	return 0;
}