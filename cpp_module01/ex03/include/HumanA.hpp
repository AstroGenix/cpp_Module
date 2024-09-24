/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:58:25 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:58:25 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../include/Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon		&_weapon;

	public:
		// Constructor
		HumanA(std::string name, Weapon &weapon);
		// Destructor
		~HumanA(void);
		// Getter
		void attack(void);
};

#endif