/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:58:28 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:58:28 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "../include/Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon		*_weapon;

	public:
		// Constructor
		HumanB(std::string name);
		// Destructor
		~HumanB(void);
		// Setter
		void setWeapon(Weapon &weapon);
		// Getter
		void attack(void);
};

#endif