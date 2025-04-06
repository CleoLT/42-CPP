/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:41:34 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/06 12:09:40 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _size( 0 ) {
	_arr = NULL;
}

template<typename T>
Array<T>::Array( unsigned int n ) : _size( n ) {
	_arr = new T[_size];
}

template<typename T>
Array<T>::Array( Array const & src ) : _size( src._size ) {
	_arr = NULL;
	*this = src;
}

template<typename T>
Array<T>::~Array() {
	if ( _arr != NULL )
		delete [] _arr;
}

template<typename T>
Array<T> &	Array<T>::operator=( Array const & rhs ) {
	if ( this != &rhs ) {
		this->_size = rhs._size;
		this->_arr = new T[this->_size];
		for ( unsigned int i = 0; i < this->_size; i++ )
			this->_arr[i] = rhs._arr[i];
		}
	return *this;
}

template<typename T>
T &	Array<T>::operator[]( int const index ) {
	if ( index > static_cast<int>( this->_size - 1 ) || index < 0 )
		throw WrongIndexException();
	return this->_arr[index];
}

template<typename T>
unsigned int	Array<T>::size() const {
	return this->_size;
}

template<typename T>
const char *	Array<T>::WrongIndexException::what() const throw() {
	return "Invalid index!";
}
