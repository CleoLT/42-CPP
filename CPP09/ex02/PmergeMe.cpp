/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:49 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/24 18:10:15 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

PmergeMe::PmergeMe( char **argv ) {
	for ( int i = 1; argv[i]; i++ )
		param.push_back( argv[i] );
	n = param.size();
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
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = this->before.end();
	std::vector<int *>::iterator		p_it;
	std::vector<int *>::iterator		p_ite; // = this->before.end();
//	int									i[2];

	std::cout << "n: " << this->n << std::endl;

	for ( it = this->before.begin(); it != ite; ++it ) {
		
		int *	i = new int[ 2 ];
		i[ 0 ] = *it;
		if ( it == ite )
			break;
		it++;
		i[ 1 ] = *it;
		pair.push_back( i );
	}

	printPair( pair );


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

void	PmergeMe::printPair( std::vector<int *> const & v ) const {
	std::vector<int *>					tmp( v );

	std::vector<int *>::const_iterator	it;
	std::vector<int *>::const_iterator	ite = tmp.end();

	for ( it = tmp.begin(); it != ite; ++it )
		std::cout << (*it)[0] << " " << (*it)[1] << " | ";
	std::cout << std::endl;
}


const char *	PmergeMe::WrongSyntaxisException::what() const throw() {
	return "wrong syntaxis, try again!";
}
