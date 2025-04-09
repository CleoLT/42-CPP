/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:48:09 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/09 20:04:38 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() : _size( 10 ), _vec ( std::vector<int>( _size )) {}

Span::Span( unsigned int N ) : _size( N ), _vec( std::vector<int>( _size ) ) {}

Span::Span( Span const & src ) {
	*this = src;
}

Span::~Span() {}

Span &	Span::operator=( Span const & rhs ) {
	if ( this != &rhs ) {
		this->_size = rhs._size;
		this->_vec = std::vector<int>( rhs._vec.begin(), rhs._vec.end() );
	}
	return *this;
}

void	Span::addNumber( int i ) {
	this->_vec.push_back( i );
}

void	Span::printContent() const {
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	it_end = this->_vec.end();

	for ( it = this->_vec.begin(); it != it_end; ++it )
		std::cout << *it << " ";
	std::cout << std::endl;
}
