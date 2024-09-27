/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:18:23 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 17:11:00 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main()
{
	// Dosen't work, because Animal is abstract
	//AAnimal	ani = AAnimal();
	//ani.makeSound();

	AAnimal	*cat = new Cat();
	cat->makeSound();

	// Dosen't work, because Animal is abstract
	//AAnimal	dog = Dog();
	//dog.makeSound();

	delete cat;

	return 0;
}