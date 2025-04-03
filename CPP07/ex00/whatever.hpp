/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:05:55 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/03 17:22:36 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void	swap( T & a, T & b ) {
	T	tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T	max( T const & a, T const & b ) {
	return ( a >= b ? a : b );
}

template<typename T>
T	min( T const & a, T const & b ) {
	return( a <= b ? a : b );
}

#endif
