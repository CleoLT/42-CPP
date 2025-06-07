/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:59:25 by cle-tron          #+#    #+#             */
/*   Updated: 2025/06/07 17:25:02 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <complex>
#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

int tEquation(int k) {
    return ( std::pow( 2, k + 1 ) + (( k % 2 == 0 ) ? 1 : -1 )) / 3;
}

void	makePairsList( std::list<int> & a, std::list<int> & b, std::list<int> & l ) {
	
	std::list<int>::iterator	it = l.begin();
	std::list<int>::iterator	ite = l.end();
	std::list<int>::iterator	next;

	while ( it != ite ) {
		next = it;
		++next;
		if ( next == ite ) {
			a.push_back( l.back() );			//si l.size() impar
			break;
		}
		if ( *it > *next ) {
			a.push_back( *it );
			b.push_back( *next );
		} else {
			a.push_back( *next );
			b.push_back( *it );
		}
		std::advance( it, 2 );
	}
}

void	makePairs( std::vector<int> & a, std::vector<int> & b, std::vector<int> & v ) {
	int n = v.size();

	for ( int i = 0; i + 1 < n; i +=2 ) {	
		if ( v[i] > v[i + 1] ) {
			a.push_back( v[i] );
			b.push_back( v[i + 1] );
		} else {
			a.push_back( v[i + 1] );
			b.push_back( v[i] );
		}
	}

	if ( n % 2 != 0 ) a.push_back( v[n - 1] );	//si v.size() impar
}


