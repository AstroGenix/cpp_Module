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

int main( void )
{
	/*

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// ^^^ main used in subject ^^^ */

	// Create an object using the default constructor
	Fixed a;
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	// Create an object using the integer constructor
	Fixed const b(10);
	std::cout << "b is " << b << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;

	// Create an object using the float constructor
	Fixed const c(42.42f);
	std::cout << "c is " << c << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;

	// Create an object using the copy constructor
	Fixed const d(b);
	std::cout << "d is " << d << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// Use the assignment operator
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	return 0;
}