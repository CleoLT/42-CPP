/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:39:06 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 12:39:42 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <iostream>

void	randomChump( std::string name ) {
	Zombie newZ = Zombie(name);
	
	std::cout << "new '" << name << "' created" << std::endl;
	newZ.announce();
}
