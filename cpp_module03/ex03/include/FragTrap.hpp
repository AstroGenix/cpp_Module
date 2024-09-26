/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:33:50 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/26 20:33:50 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		// Constructor/Destructor
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& copy);
		~FragTrap();

		// Operator
		FragTrap& operator=(const FragTrap& copy);

		// Member functions
		void highFivesGuys(void);
		void attack(const std::string& target);
};

#endif