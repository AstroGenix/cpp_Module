/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:32:03 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 18:32:04 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed(void): _fixedPointNum(0)
{
	cout << "\033[1;32mDefault constructor called\033[0m" << endl;
}

Fixed::Fixed(const Fixed &copy)
{
	cout << "\033[1;32mCopy constructor called\033[0m" << endl;
	*this = copy;
	// this->setRawBits(copy.getRawBits());  <-- more explicit
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	cout << "\033[1;32mCopy assignment operator called\033[0m" << endl;
	this->_fixedPointNum = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	cout << "\033[1;31mDestructor  called\033[0m" << endl;
}

int Fixed::getRawBits(void) const
{
	cout << "'getRawBits' member function called" << endl;
	return (this->_fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNum = raw;
}