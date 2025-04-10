/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:48:09 by cle-tron          #+#    #+#             */
/*   Updated: 2025/04/10 17:44:10 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span() : _size( 10 ) {}

Span::Span( unsigned int N ) : _size( N ) {}

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
	if ( this->_vec.size() >= this->_size )
		throw FullException();
	this->_vec.push_back( i );
}

void	Span::addNumber( std::vector<int> const & v ) {
	if ( v.size() + this->_vec.size() > this->_size )
		throw FullException();
	
	std::vector<int>::iterator	it = this->_vec.end();

	this->_vec.insert( it, v.begin(), v.end() );

}

void	Span::printContent() const {
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	it_end = this->_vec.end();

	for ( it = this->_vec.begin(); it != it_end; ++it )
		std::cout << *it << " ";
	std::cout << std::endl;
}

int		Span::shortestSpan() const {
	if ( this->_vec.size() < 2 )
		throw EmptyException();

	std::vector<int>	tmp = this->_vec;

	std::sort( tmp.begin(), tmp.end() );
	
	int	span = tmp.at( 1 ) - tmp.at( 0 );

	for ( unsigned int i = 0; i < tmp.size() - 1; i++ )
		if ( tmp.at( i + 1 ) - tmp.at( i ) < span )
			span = tmp.at( i + 1 ) - tmp.at( i );

	return span;
}

int		Span::longestSpan() const {
	if ( this->_vec.size() < 2 )
		throw EmptyException();
	
	int	max = *std::max_element( this->_vec.begin(), this->_vec.end());
	int	min = *std::min_element( this->_vec.begin(), this->_vec.end());

	return max - min;
}

const char *	Span::FullException::what() const throw() {
	return "Span is full and cannot contain number any more!";
}

const char *	Span::EmptyException::what() const throw() {
	return "Span is empty and no span can be found!";
}
