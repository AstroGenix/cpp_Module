/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberehov <dberehov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:25:38 by dberehov          #+#    #+#             */
/*   Updated: 2024/09/27 16:11:17 by dberehov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
    {
         this->ideas[i] = " 🧠 Bron 🧠 ";
    }
    std::cout << "\033[1;32mBrain constructor { void } called\033[0m" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "\033[1;32mBrain copy constructor called\033[0m" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = copy.ideas[i];
    }
}

Brain::~Brain(void)
{
    std::cout << "\033[1;31mBrain destructor called\033[0m" << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
    std::cout << "Brain operator '=' called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return (*this);
}