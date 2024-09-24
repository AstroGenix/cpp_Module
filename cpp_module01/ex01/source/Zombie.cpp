/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:54:03 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:54:03 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(void)
{
	//std::cout << "Constructor 'Zombie' Called" << std::endl;
}

Zombie::~Zombie()
{
	//std::cout << "Zombie object " << this->_name << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "\033[1;35m" << this->_name << "\033[0m: BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}