/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:29:13 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 11:41:02 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

/*
 [ClapTrap]   [ClapTrap]           <-- Main Class
	 |            |
	 |		      |
 [ScavTrap]   [FragTrap]    <-- Derived Classes
*/

int main()
{
	// Demonstrate default constructor
	std::cout << "\033[1;34mCreating FragTrap frag1 with default constructor\033[0m" << std::endl;
	FragTrap frag1;
	frag1.attack("target1");
	frag1.highFivesGuys();
	std::cout << std::endl;

	// Demonstrate parameterized constructor
	std::cout << "\033[1;34mCreating FragTrap frag2 with parameterized constructor\033[0m" << std::endl;
	FragTrap frag2("Fraggy");
	frag2.attack("target2");
	frag2.highFivesGuys();
	std::cout << std::endl;

	// Demonstrate destruction order
	std::cout << "\033[1;34mEnd of main, destructors will be called in reverse order of construction\033[0m" << std::endl;
	return 0;
}