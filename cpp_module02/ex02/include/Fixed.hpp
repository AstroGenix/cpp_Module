/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:31:55 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 18:31:56 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixedPointNum;			// Fixed-point number value
		static const int	_fractionalBits = 8;	// Num of fractional bits

	public:
		Fixed(void);							// Default constructor
		Fixed(const Fixed &copy);				// Copy constructor
		Fixed &operator=(const Fixed &copy);	// Copy assignment operator
		~Fixed(void);							// Destructor

		Fixed(int const val);					// Constructor from integer
		Fixed(float const val);					// Constructor from float

		Fixed operator+(const Fixed &copy) const;
		Fixed operator-(const Fixed &copy) const;
		Fixed operator*(const Fixed &copy) const;
		Fixed operator/(const Fixed &copy) const;
		bool operator==(const Fixed &copy) const;
		bool operator!=(const Fixed &copy) const;
		bool operator<=(const Fixed &copy) const;
		bool operator>=(const Fixed &copy) const;
		bool  operator<(const Fixed &copy) const;
		bool  operator>(const Fixed &copy) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int num);
		Fixed operator--(int num);

		int		getRawBits(void) const;		// Returns the raw fixed-point value
		void	setRawBits(int const raw);	// Sets the raw fixed-point value

		int		toInt(void) const;			// Converts fixed-point to integer
		float	toFloat(void) const;		// Converts fixed-point to float

		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
};
// Custom rounding function
int customRound(float value);

std::ostream	&operator<<(std::ostream &o, const Fixed &i);

#endif