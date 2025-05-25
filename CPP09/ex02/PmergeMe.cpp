/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:49 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/25 17:22:59 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

PmergeMe::PmergeMe( char **argv ) {
	for ( int i = 1; argv[i]; i++ )
		param.push_back( argv[i] );
//	n = param.size();
//	odd = 0;
//	printVector( param );
	parse();
}

PmergeMe::PmergeMe( PmergeMe const & src ) {
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe &	PmergeMe::operator=( PmergeMe const & rhs ) {
	if ( this != &rhs ) {
		this->before = std::vector<int>( rhs.before );
		this->after = std::vector<int>( rhs.after );
	}
	return *this;
}


void	PmergeMe::sort() {
	mergeInsertionSort( this->before );

	std::cout << "After: ";
	printVector( this->before );
	
}

void	PmergeMe::mergeInsertionSort( std::vector<int> & v ) {
	int	n = v.size();
	if ( n <= 1 ) return;

	std::vector<int>	a;
	std::vector<int>	b;

	for ( int i = 0; i + 1 < n; i +=2 ) {		//dividir por pares, y ordenar a > b en la par
		if ( v[i] > v[i + 1] ) {
			a.push_back( v[i] );
			b.push_back( v[i + 1] );
		} else {
			a.push_back( v[i + 1] );
			b.push_back( v[i] );
		}
	}

	if ( n % 2 != 0 ) a.push_back( v[n - 1] );	// si n impar
		
	mergeInsertionSort( a );					//ordenar a recursivamente : merge insertion
	
	std::vector<int>	t;						//calcular t sequence
	while( t.size() < b.size()) 
		t.push_back( tEquation( t.size() ));

	std::vector<int>	main_chain( a );
	main_chain.insert( main_chain.begin(), b[0] );
	int					b_size = b.size();		//ordenar los b en el orden inverso de t_sequence
	for ( int i = t.size() -1; i > 0; --i )		
		for( int j = std::min( t[i], b_size ) - 1; j >= t[i - 1]; --j )
			binaryInsertion( main_chain, b[j] );
	
	v = main_chain;
} 

void	PmergeMe::parse() {
	std::vector<std::string>::const_iterator	it;
	std::vector<std::string>::const_iterator	ite = param.end();
	std::string::const_iterator					s_it;
	std::string::const_iterator					s_ite;
	int											tmp;

	for ( it = param.begin(); it != ite; ++it ) {
		std::stringstream	ss( *it );

		ss >> tmp;
		if ( ss.fail() )
			throw WrongSyntaxisException();
		if ( tmp <= 0 )
			throw WrongSyntaxisException();
		s_ite = (*it).end();
		for ( s_it = (*it).begin(); s_it != s_ite; ++s_it ) { 
			if ( (*it).at( 0 ) == '+' )
				continue;
			if ( !isdigit( *s_it ))
				throw WrongSyntaxisException();
		}
		this->before.push_back( tmp );
	}
	std::cout << "Before: ";
	printVector( before );
}

void	PmergeMe::printPair( std::vector< std::pair<int, int> > const & v ) const {
	std::vector< std::pair<int, int> >					tmp( v );
	std::vector< std::pair<int, int> >::const_iterator	it;
	std::vector< std::pair<int, int> >::const_iterator	ite = tmp.end();

	for ( it = tmp.begin(); it != ite; ++it )
		std::cout << (*it).first << " " << (*it).second << " | ";
	if ( this->odd )
		std::cout << this->odd;
	std::cout << std::endl;
}


const char *	PmergeMe::WrongSyntaxisException::what() const throw() {
	return "wrong syntaxis, try again!";
}
