/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:55:59 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 20:55:59 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
# define DIAMONTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;

	public:
		// Constructors and Destructor
		DiamondTrap(void);
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap();

		// Operator
		DiamondTrap& operator=(const DiamondTrap& copy);

		// Member functions
		void whoAmI(void);
		using ScavTrap::attack;
};

#endif