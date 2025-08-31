/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:49 by cle-tron          #+#    #+#             */
/*   Updated: 2025/08/31 18:27:21 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <sys/time.h>

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
		this->deq = std::deque<int>( rhs.deq );
	}
	return *this;
}

void	PmergeMe::printUs( timeval start, timeval end, std::string container_type ) {
    long	seconds = end.tv_sec - start.tv_sec;
	long	useconds = end.tv_usec - start.tv_usec;
	long	total = seconds * 1000000 + useconds;

	std::cout << "Time to process a range of " << this->size << " elements with std::" << container_type << " : ";
	std::cout << total << " us" << std::endl;
}

void	PmergeMe::sort() {

	timeval	start, end;
	
	gettimeofday( &start, NULL );
	mergeInsertion( this->vec );
	gettimeofday( &end, NULL );

	std::cout << "After:	";
	printContainer( this->vec );
	printUs( start, end, "vector" );

	gettimeofday( &start, NULL );
	mergeInsertion( this->deq );
	gettimeofday( &end, NULL );

	std::cout << "After:	";
	printContainer( this->deq );
	printUs( start, end, "deque " );
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
		this->deq.push_back( tmp );
	}
	std::cout << "Before:	";
	printContainer( this->deq );
	this->size = this->param.size();
}

const char *	PmergeMe::WrongSyntaxisException::what() const throw() {
	return "wrong syntaxis, try again!";
}

void	PmergeMe::testSameOrder() const {
	std::vector<int>::const_iterator	v_it;
	std::vector<int>::const_iterator	v_ite = this->vec.end();
	std::deque<int>::const_iterator		d_it = this->deq.begin();
	std::deque<int>::const_iterator		d_ite = this->deq.end();

	for ( v_it = this->vec.begin(); v_it != v_ite; ++v_it ) {
		if ( d_it == d_ite || *d_it != *v_it ) {
			std::cout << "same order test failed!!" << std::endl;
			return;
		}
		++d_it;
	}
	std::cout << "same order test passed!!" << std::endl;
}

int PmergeMe::tEquation(int k) {
    return ( std::pow( 2, k + 1 ) + (( k % 2 == 0 ) ? 1 : -1 )) / 3;
}
