/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:58:30 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:58:30 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		// Constructor
		Weapon(std::string type);
		// Destructor
		~Weapon(void);
		// Setter
		void				setType(std::string newType);
		// Getter
		const std::string	&getType(void);
};

#endif