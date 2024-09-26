/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:32:28 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 13:15:30 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main( void ) {
	/*
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	// ^^^ main used in subject ^^^ */

	// Default constructor
	Fixed a;
	std::cout << "Default constructor a: " << a << std::endl;

	// Integer constructor
	Fixed b(10);
	std::cout << "Integer constructor b: " << b << std::endl;

	// Float constructor
	Fixed c(42.42f);
	std::cout << "Float constructor c: " << c << std::endl;

	// Copy constructor
	Fixed d(b);
	std::cout << "Copy constructor d (copy of b): " << d << std::endl;

	// Assignment operator
	a = Fixed(1234.4321f);
	std::cout << "Assignment operator a: " << a << std::endl;

	std::cout <<  std::endl;

	// Arithmetic operations
	Fixed e = b + c;
	std::cout << "Addition e (b + c): " << e << std::endl;

	Fixed f = c - b;
	std::cout << "Subtraction f (c - b): " << f << std::endl;

	Fixed g = b * c;
	std::cout << "Multiplication g (b * c): " << g << std::endl;

	Fixed h = c / b;
	std::cout << "Division h (c / b): " << h << std::endl;

	std::cout <<  std::endl;

	// Increment and decrement operators
	Fixed i;
	std::cout << "Initial i: " << i << std::endl;
	std::cout << "Prefix increment        ++i: " << ++i << std::endl;
	std::cout << "Postfix increment       i++: " << i++ << std::endl;
	std::cout << "After postfix increment   i: " << i << std::endl;
	std::cout << "Prefix decrement        --i: " << --i << std::endl;
	std::cout << "Postfix decrement       i--: " << i-- << std::endl;
	std::cout << "After postfix decrement   i: " << i << std::endl;

	std::cout <<  std::endl;

	// Comparison operators
	std::cout << "Comparison b > c: " << (b > c) << std::endl;
	std::cout << "Comparison b < c: " << (b < c) << std::endl;
	std::cout << "Comparison b >= d: " << (b >= d) << std::endl;
	std::cout << "Comparison b <= d: " << (b <= d) << std::endl;
	std::cout << "Comparison b == d: " << (b == d) << std::endl;
	std::cout << "Comparison b != d: " << (b != d) << std::endl;

	std::cout <<  std::endl;

	// Min and max functions
	std::cout << "Min of b and c: " << Fixed::min(b, c) << std::endl;
	std::cout << "Max of b and c: " << Fixed::max(b, c) << std::endl;

	return 0;

}