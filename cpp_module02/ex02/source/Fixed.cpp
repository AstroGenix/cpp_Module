/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:32:03 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 10:54:07 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

using std::cout;
using std::endl;

// Custom rounding function
int customRound(float value) {
	if (value >= 0) {
		return static_cast<int>(value + 0.5f);
	} else {
		return static_cast<int>(value - 0.5f);
	}
}

Fixed::Fixed(void): _fixedPointNum(0)
{
	//cout << "\033[1;32mDefault constructor called\033[0m" << endl;
}

Fixed::Fixed(const Fixed &copy)
{
	//cout << "\033[1;32mCopy constructor called\033[0m" << endl;
	*this = copy;
	// this->setRawBits(copy.getRawBits());  <-- more explicit
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	//cout << "\033[1;32mCopy assignment operator called\033[0m" << endl;
	this->_fixedPointNum = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	//cout << "\033[1;31mDestructor  called\033[0m" << endl;
}

Fixed::Fixed(int const val): _fixedPointNum(val << _fractionalBits)
{
	//cout << "\033[1;32mInt constructor called\033[0m" << endl;
}

Fixed::Fixed(float const val): _fixedPointNum(customRound(val * (1 << _fractionalBits)))
{
	//cout << "\033[1;32mFloat constructor called\033[0m" << endl;
}

// Arithmatics

Fixed Fixed::operator+(const Fixed &copy) const
{
	Fixed res(this->toFloat() + copy.toFloat());
	return (res);
}

Fixed Fixed::operator-(const Fixed &copy) const
{
	Fixed res(this->toFloat() - copy.toFloat());
	return (res);
}

Fixed Fixed::operator*(const Fixed &copy) const
{
	Fixed res(this->toFloat() * copy.toFloat());
	return (res);
}

Fixed Fixed::operator/(const Fixed &copy) const
{
	Fixed res(this->toFloat() / copy.toFloat());
	return (res);
}

// Comparison

bool Fixed::operator==(const Fixed &copy) const
{
	return (this->toFloat() == copy.toFloat());
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return (this->toFloat() != copy.toFloat());
}

bool Fixed::operator<=(const Fixed &copy) const
{
	return (this->toFloat() <= copy.toFloat());
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return (this->toFloat() >= copy.toFloat());
}

bool Fixed::operator<(const Fixed &copy) const
{
	return (this->toFloat() < copy.toFloat());
}

bool Fixed::operator>(const Fixed &copy) const
{
	return (this->toFloat() > copy.toFloat());
}

// Increment/Decrement 

Fixed &Fixed::operator++(void)
{
	++_fixedPointNum;
    return *this;
}

Fixed &Fixed::operator--(void)
{
	--_fixedPointNum;
    return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed aux = *this;
    _fixedPointNum++;
    return aux; 
}

Fixed Fixed::operator--(int)
{
	Fixed aux = *this;
    _fixedPointNum--;
    return aux;
}

// Member Functions

int Fixed::getRawBits(void) const
{
	//cout << "'getRawBits' member function called" << endl;
	return (this->_fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNum = raw;
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointNum >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits()) / (1 << _fractionalBits));
}

std::ostream &operator<<(std::ostream &out_stream, const Fixed &fixed_value)
{
	out_stream << fixed_value.toFloat();
	return (out_stream);
}

// Max/Min

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}