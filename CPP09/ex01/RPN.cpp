/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:11:01 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/11 17:56:21 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <string>
#include <stack>
#include <iterator>
#include <iostream>
#include <cstdlib>

RPN::RPN( std::string const & s ) { 
	parse( s ); 
	printStack( in );
}

RPN::~RPN() {}

RPN::RPN( RPN const & src ) {
	*this = src;
}

RPN &	RPN::operator=( RPN const & rhs ) {
	if ( this != &rhs ) {
		this->in = std::stack<std::string>( rhs.in );
		this->out = std::stack<int>( rhs.out );
	}
	return *this;
}

void	RPN::parse( std::string const & str ) {
	std::string	s( str );
	int			i = 0;

	std::string::iterator	it;
	std::string::iterator	ite = s.end();
	

	for ( it = s.begin(); it != ite; ++it ) {
		if ( s.at( i ) == ' ' ) {
			i++;
			continue;
		}
		if ( s.at( i ) == '-' || s.at( i ) == '+' ) { 
			if ( s[ i + 1 ] && isdigit( s.at( i + 1 ))) {
				this->in.push( s.substr( i, 2 ));
				i++;
				it++;
			}
			else
				this->in.push( s.substr( i, 1 ));
		}
		else 
			this->in.push( s.substr( i, 1 ));
		i++;		
	}
}

int	RPN::output() {

	while ( !this->in.empty() ) {
		if ( this->in.top() == "0" || this->in.top() == "+0" || this->in.top() == "-0" ) {
			this->out.push( 0 );
			this->in.pop();
			continue;
		}
		if ( atoi( this->in.top().c_str() ) != 0 ) {
			this->out.push( atoi( this->in.top().c_str()));
			this->in.pop();
			continue;
		}
		break;
	}
	printStack( this->in );
	printStack( this->out );
	return this->out.top();
}
