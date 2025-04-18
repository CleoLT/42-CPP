/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:55:31 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/26 16:22:24 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

struct	Data;

class	Serializer {
private:
	Serializer( void );
	Serializer( Serializer const & src );
	~Serializer( void );

	Serializer &	operator=( Serializer const & rhs );

public:
	static uintptr_t	serialize( Data* ptr );
	static Data*		deserialize( uintptr_t raw );
};

#endif
