/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:11:01 by cle-tron          #+#    #+#             */
/*   Updated: 2025/05/14 19:13:19 by cle-tron         ###   ########.fr       */
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
	size_t		pos;

	std::string::reverse_iterator	rit;
	std::string::reverse_iterator	rite = s.rend();
	

	for ( rit = s.rbegin(); rit != rite; ++rit ) {
		if ( *rit == ' ' )
			continue;
		pos = s.rend() - rit;
		if ( isdigit( *rit ) && rit + 1 != rite ) {
			if ( *( rit + 1 ) == '-' || *( rit + 1 ) == '+' ) {
				size_t pos = s.rend() - rit;
				this->in.push( s.substr( pos - 2, 2 ));
				rit++;
				continue;
			}
		}	
		this->in.push( s.substr( pos - 1, 1 ));
	}
}

void	RPN::makeCalcul() {
				

int	RPN::output() {

	while ( !this->in.empty() ) {
		if ( this->in.top() == "0" || this->in.top() == "+0" || this->in.top() == "-0" ) {
			this->out.push( 0 );
			this->in.pop();
		//	continue;
		}
		else if ( atoi( this->in.top().c_str() ) != 0 ) {
			this->out.push( atoi( this->in.top().c_str()));
			std::cout << "|";
			this->in.pop();
		//	continue;
		}
		else {
			try {
				switch ( whichOperator()) {
					case ADD:
						makeCalcul( ADD ) 
			catch ( std::exception & e )
				std::cout << e.what() <<std::endl;
		}
	//	break;
	}

	std::cout << std::endl;
	printStack( this->in );
	printStack( this->out );
	return this->out.top();
}
