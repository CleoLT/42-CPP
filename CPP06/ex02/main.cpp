/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:40:08 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/26 17:56:43 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main( void ) {
	Base *	n1 = generate();
	Base &	ref = *n1;
	
	identify( n1 );
	identify( ref );

	delete n1;
	return 0;
}
