/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:59:25 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/25 17:05:59 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <complex>
#include <algorithm>
#include <vector>

int tEquation(int k) {
    return ( std::pow( 2, k + 1 ) + std::pow( -1, k )) / 3;
}

void	binaryInsertion( std::vector<int> & main_chain, int b ) {
	std::vector<int>::iterator	position = lower_bound( main_chain.begin(), main_chain.end(), b );

	main_chain.insert( position, b );
}

void	printV( std::vector<int> const & v ) {
	std::vector<int>					tmp( v );

	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = tmp.end();

	for ( it = tmp.begin(); it != ite; ++it )
		std::cout << *it << " ";
	std::cout << std::endl;
}


void	testTSequence() {

	
	std::vector<int>	b( 10, 10 );
	std::vector<int>	t;					//calcular t sequence

	while( t.size() < b.size()) 
		t.push_back( tEquation( t.size() ));
	std::cout << "//TEST// t_sequence: ";
	printV( t );
}

void	testBinaryInsertion() {

	int					myints[] = {  1, 3, 6, 99, 333 };
	std::vector<int>	v( myints, myints + sizeof( myints ) / sizeof( int ));
	
	std::cout << "//TEST// binary insertion function" << std::endl;
	std::cout << "Before:	";
	printV( v );

	binaryInsertion( v, 34 );
	binaryInsertion( v, 3 );
	binaryInsertion( v, 348 );
	binaryInsertion( v, 45 );

	std::cout << "After:	";
	printV( v );
}

void	testOrderB() {
	
	int					myints[] = {  10, 64, 99, 333 };
	int					myint[] = {  9, 4, 73, 56 };
	std::vector<int>	a( myints, myints + sizeof( myints ) / sizeof( int ));
	std::vector<int>	b( myint, myint + sizeof( myint ) / sizeof( int ));

	std::cout << "//TEST// order b into a, a is sorted" << std::endl;
	std::cout << "a before: ";
	printV( a );

	std::vector<int>	t;						//calcular t sequence
	while( t.size() < b.size()) 
		t.push_back( tEquation( t.size() ));

	std::vector<int>	main_chain( a );
	int					b_size = b.size();		//ordenar los b en el orden inverso de t_sequence
	for ( int i = t.size() - 1; i > 0; --i )		
		for( int j = std::min( t[i], b_size ) - 1; j >= t[i - 1]; --j )
			binaryInsertion( main_chain, b[j] );
	


	std::cout << "a after: ";
	printV( main_chain );
}

void	testDividePairs() {
	int					myints[] = { 20, 40, 100, 1, 3, 6, 90, 300 };
	std::vector<int>	v( myints, myints + sizeof( myints ) / sizeof( int ));
	int					n = v.size();

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
	
	std::cout << "//TEST// divide and order pairs" <<std::endl;
	std::cout << "all values: ";
	printV( v );
	std::cout << "a: ";
	printV( a );
	std::cout << "b: ";
	printV( b );
}
