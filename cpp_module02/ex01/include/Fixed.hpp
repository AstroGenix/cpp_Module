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
#include <cmath>

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

		Fixed(int const val);
		Fixed(float const val);

		int		getRawBits(void) const;		// Returns the raw fixed-point value
		void	setRawBits(int const raw);	// Sets the raw fixed-point value

		int		toInt(void) const;
		float	toFloat(void) const;
};
// Custom rounding function
int customRound(float value);

std::ostream	&operator<<(std::ostream &o, const Fixed &i);

#endif