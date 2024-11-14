/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:57:19 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/14 13:35:38 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie*	horde = new Zombie[N];

	for ( int i = 0; i < N; i++ )
		horde[i].setName(name);
	return horde;
}
