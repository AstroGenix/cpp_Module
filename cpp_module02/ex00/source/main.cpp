/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:32:28 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 18:32:29 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main() {

	/*
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	// ^^^ main used in subject ^^^ */

	/*
	Fixed a; (Default constructor)
		Calls the default constructor Fixed::Fixed(void).
		Initializes _fixedPointNum to 0.
		Prints: Default constructor called.
		a.getRawBits() returns 0.

	Fixed b(a); (Copy Constructor)
		Calls the copy constructor Fixed::Fixed(const Fixed &copy).
		Prints: Copy constructor called.
		Inside the copy constructor, *this = copy calls the copy assignment operator.
		The copy assignment operator sets _fixedPointNum of b to the value of _fixedPointNum of a (which is 0).
		Prints: Copy assignment operator called.
		b.getRawBits() returns 0.

	Fixed c = a; (Assignment operator)
		Calls the default constructor Fixed::Fixed(void) for c.
		Initializes _fixedPointNum to 0.
		Prints: Default constructor called.
		Calls the copy assignment operator Fixed &Fixed::operator=(const Fixed &copy) for c = a.
		Sets _fixedPointNum of c to the value of _fixedPointNum of a (which is 0).
		Prints: Copy assignment operator called.
		c.getRawBits() returns 0.
	*/

	// Create an object using the default constructor
	Fixed a;
	std::cout << "a's raw bits: " << a.getRawBits() << std::endl;

	// Create an object using the copy constructor
	Fixed b(a);
	std::cout << "b's raw bits: " << b.getRawBits() << std::endl;

	// Create another object and use the assignment operator
	Fixed c;
	c = a;
	std::cout << "c's raw bits: " << c.getRawBits() << std::endl;

	return 0;
}