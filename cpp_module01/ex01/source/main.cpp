/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:54:01 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:54:01 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
	int N = 4;
	std::string name = "Undead";

	Zombie *horde = zombieHorde(N, name);

	if (horde)
	{
		for (int i = 0; i < N; i++)
		{
			horde[i].announce();
		}
		delete [] horde;
	}
	else
	{
		std::cerr << "Failed to create zombie horde" << std::endl;
	}

	 return 0;
}