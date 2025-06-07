/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:49 by cle-tron          #+#    #+#             */
/*   Updated: 2025/06/07 17:25:02 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>

PmergeMe::PmergeMe( char **argv ) {
	for ( int i = 1; argv[i]; i++ )
		param.push_back( argv[i] );
	parse();
}

PmergeMe::PmergeMe( PmergeMe const & src ) {
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe &	PmergeMe::operator=( PmergeMe const & rhs ) {
	if ( this != &rhs ) {
		this->vec = std::vector<int>( rhs.vec );
		this->list = std::list<int>( rhs.list );
	}
	return *this;
}


void	PmergeMe::sort() {

	mergeInsertionVec( this->vec );
	std::cout << "After:	";
	printContainer( this->vec );
	std::cout << "Time to process a range of 3000 elements with std::vector : " << "time" << " us" << std::endl;
	
	mergeInsertionList( this->list );
	std::cout << "After:	";
	printContainer( this->list );
	std::cout << "Time to process a range of 3000 elements with std::list   : " << "time" << " us" << std::endl;
}

void	PmergeMe::mergeInsertionList( std::list<int> & l ) {
	int	n = l.size();
	if ( n <= 1 ) return;

	std::list<int>	a;
	std::list<int>	b;

	makePairsList( a, b, l );						//dividir por pares, y ordenar a > b en la par
	
	mergeInsertionList( a );						//ordenar a recursivamente : merge insertion
	
	std::list<int>	t;								//calcular t sequence
	int					i = 0;
	
	while (true) {
		int next = tEquation( i );
		if ( next >= (int)b.size())
			break;
		t.push_back( next );
		++i;
	}
	
	std::list<int>	main_chain( a );

	binaryInsertion( main_chain, b.front());

	std::list<int>::reverse_iterator	rit, next;	// insertar los b en bloques de t, en el orden inverso de t_sequence
	std::list<int>::reverse_iterator	rite = t.rend();
	std::list<int>::iterator			upper_it, lower_it, tmp_it;

	for (rit = t.rbegin(); rit != rite; ++rit) {
		next = rit;
		++next;
		if (next == rite) break;
	
		int upper = std::min(*rit, (int)b.size());
		int lower = *next;

		lower_it = b.begin();
		upper_it = b.begin();
		std::advance(lower_it, lower);
		std::advance(upper_it, upper);
	
		while (upper_it != lower_it) {
			--upper_it;
			binaryInsertion(main_chain, *upper_it);
		}
	}

	for ( size_t j = t.empty() ? 1 : t.back(); j < b.size(); ++j ) { 
		tmp_it = b.begin();
		std::advance(tmp_it, j);	
		binaryInsertion(main_chain, *tmp_it);
	}

	l = main_chain;

}


void	PmergeMe::mergeInsertionVec( std::vector<int> & v ) {
	int	n = v.size();
	if ( n <= 1 ) return;

	std::vector<int>	a;
	std::vector<int>	b;

	makePairs( a, b, v );						//dividir por pares, y ordenar a > b en la par
		
	mergeInsertionVec( a );						//ordenar a recursivamente : merge insertion
	
	std::vector<int>	t;						//calcular t sequence
	int					i = 0;
	
	while (true) {
		int next = tEquation( i );
		if ( next >= (int)b.size())
			break;
		t.push_back( next );
		++i;
	}
	
	std::vector<int>	main_chain( a );

	binaryInsertion( main_chain, b[0] );
	
	for ( int i = t.size() - 1; i > 0; --i ) 		// insertar los b en bloques de t, en el orden inverso de t_sequence
		for( int j = std::min( t[i], (int)b.size()) - 1; j >= t[i - 1]; --j ) 
			binaryInsertion( main_chain, b[j] );

	//Insertar elementos restantes de b que no fueron cubiertos por los bloques de t
	for ( size_t j = t.empty() ? 1 : t.back(); j < b.size(); ++j )
		binaryInsertion(main_chain, b[j]);

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
		this->vec.push_back( tmp );
		this->list.push_back( tmp );
	}
	std::cout << "Before:	";
	printContainer( this->list );
}

const char *	PmergeMe::WrongSyntaxisException::what() const throw() {
	return "wrong syntaxis, try again!";
}
