/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:38:36 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 12:39:42 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie( std::string name ) {
	Zombie*	newZ = new Zombie(name);
	
	std::cout << "new '" << name << "' created" << std::endl;
	return newZ;
}
