/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:31:00 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/03 18:49:50 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T, typename L, typename F>
void	iter( T * array, L const length, F const f) {
	for ( L i = 0; i < length; i++ ) 
		f( array[i] );
}

template<typename T> // ameliorer la fct aver la lenght pout pas imprimer la virgule et faire un saut a la ligne a la derniere llamada
void	print( T const & t ) {
	std::cout << t << ", ";
}

#endif
