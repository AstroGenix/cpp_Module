/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:37:03 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/24 15:37:03 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie(std::string name)
{
	this->_name = name;
	//cout<< "\033[1;37;42mConstuctor 'Zombie' Called\033[0m" << endl;
}

Zombie::~Zombie(void)
{
	//cout << "Zombie " << this->_name << " has been destroyed" << endl;
}


void Zombie::announce(void)
{
	cout << "\033[1;29m" << this->_name << "\033[0m: BraiiiiiiinnnzzzZ..." << endl;
}