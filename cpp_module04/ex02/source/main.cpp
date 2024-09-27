/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:23 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 17:53:32 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main()
{
	/*
	// [                   TEST 1                   ]
	// Dosen't work, because Animal is abstract
	//AAnimal	ani = AAnimal();
	//ani.makeSound();

	AAnimal	*cat = new Cat();
	cat->makeSound();

	// Dosen't work, because Animal is abstract
	//AAnimal	dog = Dog();
	//dog.makeSound();

	delete cat
	*/
	// [                   TEST 2                   ]
	std::cout << "\033[1;34mTest 1: Attempting to Instantiate an Abstract Class\033[0m" << std::endl;

    // You cannot instantiate an abstract class directly.
    // AAnimal* animal = new AAnimal(); // This will cause a compilation error.

    // However, you can instantiate a derived class that implements all pure virtual functions
    // of the abstract base class and assign it to a pointer of the abstract base class type.
    AAnimal* cat = new Cat(); // This is valid because Cat is a concrete class that implements all pure virtual functions of AAnimal.
    cat->makeSound(); // Calls the makeSound() method of the Cat class.

    delete cat; // Clean up the allocated memory.

    /*
	// [                   TEST 3                   ]
	std::cout << "\033[1;34mTest 3: Abstract Class with Pure Virtual Function\033[0m" << std::endl;

    // Uncommenting the following line will cause a compilation error
    // because AAnimal is an abstract class and cannot be instantiated.
    // AAnimal animal;

    Cat cat;
    Dog dog;

    cat.makeSound();
    dog.makeSound();

    return 0;
	*/
}