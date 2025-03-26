/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:55:37 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/26 16:22:23 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <stdint.h>

Serializer::Serializer( void ) {}

Serializer::Serializer( Serializer const & src ) {
	*this = src;
}

Serializer::~Serializer( void ) {}

Serializer &	Serializer::operator=( Serializer const & rhs ) {
	(void)rhs;
	return *this;
}

uintptr_t	Serializer::serialize( Data* ptr ) {
	return reinterpret_cast<uintptr_t>( ptr );
}

Data *	Serializer::deserialize( uintptr_t raw ) {
	return reinterpret_cast<Data*>( raw );
}
