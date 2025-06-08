/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:42:10 by cle-tron          #+#    #+#             */
/*   Updated: 2025/06/08 10:53:27 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <complex>
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

template<typename C>
void	printC( C const & v ) {
	C						tmp( v );
	typename C::iterator	it;
	typename C::iterator	ite = tmp.end();

	for ( it = tmp.begin(); it != ite; ++it )
		std::cout << *it << " ";
	std::cout << std::endl;
}


void	testTSequence() {

	
	std::vector<int>	b( 10, 10 );
	std::vector<int>	t;				

	while( t.size() < b.size()) 
		t.push_back( tEquation( t.size() ));
	std::cout << "//TEST// t_sequence: ";
	printC( t );
}

void	testBinaryInsertion() {

	int					myints[] = { 1, 3, 6, 99, 333 };
	std::vector<int>	v( myints, myints + sizeof( myints ) / sizeof( int ));
	
	std::cout << "//TEST// binary insertion function" << std::endl;
	std::cout << "Before:	";
	printC( v );

	binaryInsertion( v, 34 );
	binaryInsertion( v, 3 );
	binaryInsertion( v, 348 );
	binaryInsertion( v, 45 );

	std::cout << "After:	";
	printC( v );
}

void	testOrderB() {
	
	int					myints[] = {  10, 64, 99, 333 };
	int					myint[] = {  9, 4, 73, 56 };
	std::vector<int>	a( myints, myints + sizeof( myints ) / sizeof( int ));
	std::vector<int>	b( myint, myint + sizeof( myint ) / sizeof( int ));

	std::cout << "//TEST// order b into a, a is sorted" << std::endl;
	std::cout << "a before: ";
	printC( a );

	std::vector<int>	t;				
	while( t.size() < b.size()) 
		t.push_back( tEquation( t.size() ));

	std::vector<int>	main_chain( a );
	int					b_size = b.size();	
	for ( int i = t.size() - 1; i > 0; --i )		
		for( int j = std::min( t[i], b_size ) - 1; j >= t[i - 1]; --j )
			binaryInsertion( main_chain, b[j] );

	std::cout << "a after: ";
	printC( main_chain );
}

void	testDividePairs() {
	int					myints[] = { 20, 40, 100, 1, 3, 6, 90, 300, 55};
	std::vector<int>	v( myints, myints + sizeof( myints ) / sizeof( int ));
	std::list<int>		l( myints, myints + sizeof( myints ) / sizeof( int ));

	std::vector<int>	a;
	std::vector<int>	b;
	std::list<int>		c;
	std::list<int>		d;

	
	makePairs( a, b, v );
	makePairsList( c, d, l);

	std::cout << "//TEST// divide and order pairs" <<std::endl;
	std::cout << "all values: ";
	printC( v );
	std::cout << "a: ";
	printC( a );
	std::cout << "b: ";
	printC( b );
	std::cout << "all v list: ";
	printC( l );
	std::cout << "c: ";
	printC( c );
	std::cout << "d: ";
	printC( d );

}


