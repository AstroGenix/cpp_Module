/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:54:51 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:54:51 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
Pointers
 -- A pointer is an integer that stores a memory address.
	It is the address of where that specific memory is.
 -- The types of that pointer do not matter.
	It only indicates the type of data that's presumably holding.
	It's something we write to make our lives easier syntatically.
	Type does not change what a pointer is.
 -- Pointing to an invalid memory address (like 0) is perfectly fine for pointer.
 -- Dereferencing (*ptr) means accessing the data. In this way, you can write to
 	or read from the data.

References
 -- A way for us to reference an existing variable.
 -- References are not new variables. they don't really occupy memory or have storage.
 -- Once you define a reference, you can't change what a reference is.

Comparisons
 -- You can't change where the reference is pointing to.
    It will always point to the same variable.
 -- You can't create a reference and let it point to nothing (uninitialised reference).
	Because it is constant, you can't point to something else later.
	But a reference can't point to nothing.

	If something should always exist and never change, use a references.
	But if it should not always exist and can change, use a pointer.
*/

int main(void)
{
	// Initialize the string variable
	std::string str = "HI THIS IS BRAIN";

	// Create a pointer to the string
	std::string *stringPTR = &str;

	// Create a reference to the string
	std::string &stringREF = str;

	// Print the memory address of the string variable
	std::cout << "Memory address of the string variable: \t" << &str << std::endl;

	// Print the memory address held by stringPTR
	std::cout << "Memory address held by stringPTR: \t" << stringPTR << std::endl;

	// Print the memory address held by stringREF
	std::cout << "Memory address held by stringREF: \t" << &stringREF << std::endl;

	// Print the value of the string variable
	std::cout << "Value of the string variable: \t\t" << str << std::endl;

	// Print the value pointed to by stringPTR
	std::cout << "Value pointed to by stringPTR: \t\t" << *stringPTR << std::endl;

	// Print the value pointed to by stringREF
	std::cout << "Value pointed to by stringREF: \t\t" << stringREF << std::endl;

	return 0;
}