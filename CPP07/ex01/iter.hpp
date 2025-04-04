/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:31:00 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/04 14:29:59 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T, typename L, typename F>
void	iter( T * array, L const length, F const f) {
	for ( L i = 0; i < length; i++ )
		f( array[i] );
}

template<typename T>
void	print( T const & t ) {
	std::cout << t << " ";
}

template<typename T>
void	increment( T & num ) {
	num++;
}

template<typename T>
void	initials( T & str ) {
	if ( !str.empty() && str.at( 1 ) ) 
		str.erase( 1 );
	if ( !str.empty() )
		str.at( 0 ) = toupper( str.at( 0 ));
}


#endif
