/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:23 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 17:44:16 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main()
{
	{
		// Main Subject
		std::cout << "\033[1;34mMain Subject\033[0m" << std::endl;
		const Animal* jdog = new Dog();
		const Animal* icat = new Cat();
	
		delete jdog; //should not create a leak
		delete icat;
	}

	/*{
		// Deep Copy Test
		std::cout << "\033[1;34mDeep Copy Test\033[0m" << std::endl;
		Cat basic;
		std::cout << "Normal brain for reference" << std::endl;
		basic.getIdea();
		basic.setIdea(0, " 🐟 Fish 🐠 ");
		basic.setIdea(1, " 🐟 Fish 🐠 ");

		std::cout << "Basic Cat's ideas before copy:" << std::endl;
		basic.getIdea();

		{
			Cat tmp = basic;
			std::cout << "Tmp Cat's ideas after copy:" << std::endl;
			tmp.getIdea();
		}

		
		//If it were a shallow cope basic and tmp would share the same brain
		//Meaning after tmp gets out of scope basic's brain would be deleted

		//However, if it were a deep copy basic and tmp would have different brains
		//But with the same ideas
		

		std::cout << "Basic Cat's ideas after tmp goes out of scope:" << std::endl;
		basic.getIdea();
	}*/

	/*{
		// Create an array of pointers to the base class Animal
		const int numAnimals = 4;
		Animal* animals[numAnimals];

		// Fill half the array with Dog objects and the other half with Cat objects
		for (int i = 0; i < numAnimals / 2; ++i) {
			animals[i] = new Dog();
			std::cout << std::endl;
		}
		for (int i = numAnimals / 2; i < numAnimals; ++i) {
			animals[i] = new Cat();
			std::cout << std::endl;
		}

		// Loop over the array and delete every Animal
		for (int i = 0; i < numAnimals; ++i) {
   			 delete animals[i];
			 std::cout << std::endl;
		}
	}*/

	return 0;
}