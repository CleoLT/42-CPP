/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:02:55 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/20 12:02:55 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T> {}
	
template<typename T>
MutantStack<T>::MutantStack( MutantStack<T> const & src ) : std::stack<T>( src ) { *this = src; }
	
template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=( MutantStack<T> const & rhs ) {
		if ( this != &rhs )
			std::stack<T>::operator=( rhs );
		return *this;
}


