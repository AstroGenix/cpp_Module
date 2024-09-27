/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:23 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 13:34:51 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	// Test 1: Basic functionality
	std::cout << "\033[1;34mTest 1: Basic functionality\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();					// These 2 are the exact same classes with exact same
	const WrongAnimal* wrongCat = new WrongCat();	// functions except 'Wrong' doesn't have virtual

	std::cout << "Animal makes sound: \t";
	meta->makeSound(); // Should output the generic animal sound

	std::cout << "Dog makes sound: \t";
	dog->makeSound(); // Should output the dog sound

	std::cout << "Cat makes sound: \t";
	cat->makeSound(); // Should output the cat sound

	std::cout << "WrongCat makes sound: \t";
	wrongCat->makeSound(); // Should NOT output the wrong cat sound

	delete meta;
	delete dog;
	delete cat;
	delete wrongCat;

	// Test 2: Polymorphism
	std::cout << "\n\033[1;34mTest 2: Polymorphism\033[0m" << std::endl;
	// Create an array of pointers to the base class Animal
	Animal* animals[4];
	
	// Dynamically allocate objects of derived classes and store their pointers in the array
	animals[0] = new Dog(); // Store a Dog object
	animals[1] = new Cat(); // Store a Cat object
	animals[2] = new Dog(); // Store another Dog object
	animals[3] = new Cat(); // Store another Cat object

	// Call the makeSound method on each element of the array
	for (int i = 0; i < 4; ++i) {
		animals[i]->makeSound(); // Polymorphism: calls the correct makeSound method for each object
	}

	for (int i = 0; i < 4; ++i) {
		delete animals[i];
	}

	// Test 3: WrongAnimal polymorphism
	std::cout << "\n\033[1;34mTest 3: WrongAnimal polymorphism\033[0m" << std::endl;
	WrongAnimal* wrongAnimals[2];
	wrongAnimals[0] = new WrongCat();    // If Wronganimal had virtual output would be "Cat 🐈: Wrong Meow!"
	wrongAnimals[1] = new WrongAnimal();

	for (int i = 0; i < 2; ++i) {
		wrongAnimals[i]->makeSound();
	}

	for (int i = 0; i < 2; ++i) {
		delete wrongAnimals[i];
	}

	return 0;
}