/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:36:07 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:36:07 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

using std::cout;
using std::cin;
using std::endl;

int	main(void)
{
	// Stack allocation example
	cout << "\033[1;32mCreating a Zombie on the stack:\033[0m" << endl;
	randomChump("StackZombie");

	cout << endl;

	// Heap allocation example
	cout << "\033[1;34mCreating a Zombie on the heap:\033[0m" << endl;
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	// Cleanup heap-allocated Zombie
	delete heapZombie;

	return 0;
}