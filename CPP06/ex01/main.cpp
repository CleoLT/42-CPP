/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:54:59 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/26 16:26:39 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>
#include <stdint.h>

int	main( void ) {
	Data*	data = new Data;
	
	data->name = "Michou";
	data->age = 24;

	std::cout << "data - name: " << data->name << ", age: " << data->age;
	std::cout << ", ptr: " << data;
	std::cout << std::endl;

	uintptr_t	int_value = Serializer::serialize( data );

	Data*	reinterpret = Serializer::deserialize( int_value );

	std::cout << "reinterpret - name: " << reinterpret->name;
	std::cout << ", age: " << reinterpret->age;
	std::cout << ", ptr: " << reinterpret << std::endl;

	delete reinterpret;
	
	return 0;
}
