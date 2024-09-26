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

#include "../include/ScavTrap.hpp"

/*
Construction Order
	Base Class Construction: When you create an instance of a derived class (ScavTrap),
		the constructor of the base class (ClapTrap) is called first. This ensures that
		the base part of the object is properly initialized before the derived part.
	Derived Class Construction: After the base class constructor completes,
		the constructor of the derived class (ScavTrap) is called to initialize
		the derived part of the object.

Destruction Order
	Destruction happens in the reverse order of construction:

	Derived Class Destruction: When an object is destroyed, the destructor of the derived
		class (ScavTrap) is called first. This ensures that any resources allocated by
		the derived class are released before the base class destructor is called.
	Base Class Destruction: After the derived class destructor completes, the destructor
		of the base class (ClapTrap) is called to clean up the base part of the object.
*/

int main()
{
	// Demonstrate default constructor
    std::cout << "\033[1;34mCreating ScavTrap scav1 with default constructor\033[0m" << std::endl;
    ScavTrap scav1;
    scav1.attack("target1");
    scav1.guardGate();
    std::cout << std::endl;

    // Demonstrate parameterized constructor
    std::cout << "\033[1;34mCreating ScavTrap scav2 with parameterized constructor\033[0m" << std::endl;
    ScavTrap scav2("Scavvy");
    scav2.attack("target2");
    scav2.guardGate();
    std::cout << std::endl;

    // Demonstrate another instance with parameterized constructor
    std::cout << "\033[1;34mCreating ScavTrap scav3 with parameterized constructor\033[0m" << std::endl;
    ScavTrap scav3("Guardian");
    scav3.attack("target3");
    scav3.guardGate();
    std::cout << std::endl;

    // Demonstrate destruction order
    std::cout << "\033[1;34mEnd of main, destructors will be called in reverse order of construction\033[0m" << std::endl;
    return 0;
}