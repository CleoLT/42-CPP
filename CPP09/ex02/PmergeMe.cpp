/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:49 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/24 16:28:54 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

PmergeMe::PmergeMe( char **argv ) {
	for ( int i = 1; argv[i]; i++ )
		param.push_back( argv[i] );
//	printVector( param );

	parse();
}

PmergeMe::PmergeMe( const PmergeMe const & src ) {
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe &	PmergeMe::operator=( PmergeMe const & rhs ) {
	if ( this != &rhs ) {
		this->before = std::vector<int>( rhs->before );
		this->after = std::vector<int>( rhs->after );
	}
	return *this;
}

void	PmergeMe::parse() {
	std::vector<std::string>::const_iterator	it;
	std::vector<std::string>::const_iterator	ite = param.end();
	std::string::const_iterator					s_it;
	std::string::const_iterator					s_ite;
	int											tmp;

	for ( it = param.begin(); it != ite; ++it ) {
		tmp = atoi( (*it).c_str());
		if ( !tmp )
			throw WrongSyntaxisException();
		s_ite = (*it).end();
		for ( s_it = (*it).begin(); s_it != s_ite; ++s_it ) {
			if ( !isdigit( *s_it ))
				throw WrongSyntaxisException();
		//intMax
		this->before.push_back( tmp );
	}
	printVector( before );
}

const char *	PmergeMe::WrongSyntaxisException::what() const throw() {
	return "wrong syntaxis, try again!";
}
