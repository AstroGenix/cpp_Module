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

#include "../include/DiamondTrap.hpp"

/*   --With Virtual--                  |         --Without Virtual--
	   [ClapTrap]                      |        [ClapTrap] [ClapTrap]
		/	   \                       |            |         |
	   /		\                      |            |         |
 [ScavTrap]   [FragTrap]               |        [ScavTrap] [FragTrap]
	   \        /                      |            \         /
		\      /                       |             \       /
	  [DiamondTrap]                    |           [DiamondTrap] 
_______________________________________________________________________________

Without Virtual Inheritance:

If ScavTrap and FragTrap both inherit from ClapTrap without using virtual
	inheritance, and DiamondTrap inherits from both ScavTrap and FragTrap,
	then DiamondTrap would have two separate instances of ClapTrap.
	This is known as the "diamond problem" in multiple inheritance.

With Virtual Inheritance:

By using virtual inheritance, ScavTrap and FragTrap share a single instance
	of ClapTrap when DiamondTrap inherits from them.
	This ensures that DiamondTrap has only one instance of ClapTrap,
	avoiding redundancy and potential conflicts.
*/

int main()
{
	// Demonstrate ClapTrap
	std::cout << "\033[1;34mCreating ClapTrap clap1 with default constructor\033[0m" << std::endl;
	ClapTrap clap1("Clappy");
	clap1.attack("target1");
	clap1.takeDamage(5);
	clap1.beRepaired(3);
	std::cout << std::endl;

	// Demonstrate ScavTrap
	std::cout << "\033[1;34mCreating ScavTrap scav1 with default constructor\033[0m" << std::endl;
	ScavTrap scav1("Scavvy");
	scav1.attack("target2");
	scav1.guardGate();
	std::cout << std::endl;

	// Demonstrate FragTrap
	std::cout << "\033[1;34mCreating FragTrap frag1 with default constructor\033[0m" << std::endl;
	FragTrap frag1("Fraggy");
	frag1.attack("target3");
	frag1.highFivesGuys();
	std::cout << std::endl;

	// Demonstrate DiamondTrap
	std::cout << "\033[1;34mCreating DiamondTrap diamond1 with default constructor\033[0m" << std::endl;
	DiamondTrap diamond1("Diamondy");
	diamond1.attack("target4");
	diamond1.whoAmI();
	std::cout << std::endl;

	// Demonstrate destruction order
	std::cout << "\033[1;34mEnd of main, destructors will be called in reverse order of construction\033[0m" << std::endl;
	return 0;
}