/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:05:11 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 13:05:11 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_damage;

	public:
		// Constructor/Desctructor
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& copy);
		~ClapTrap();

		// Operator
		ClapTrap& operator=(const ClapTrap& copy);

		// Member Functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int ammount);
		void	beRepaired(unsigned int ammount);
};

#endif
