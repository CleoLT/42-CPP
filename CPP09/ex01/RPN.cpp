/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:11:01 by cle-tron          #+#    #+#             */
/*   Updated: 2025/08/31 16:39:51 by cle-tron         ###   ########.fr       */
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

int	RPN::whichOperator() const {
	std::string	operators[4] = {"+", "-", "*", "/"};

	for ( int i = 0; i < 4; i++ )
		if ( this->in.top() == operators[i] )
			return i;
	return -1;
}


void	RPN::makeCalculation() {

//	if ( this->out.empty()) NotEnoughNumbersException();

	int	tmp = this->out.top();
	
	this->out.pop();
	if ( this->out.empty() )
		throw NotEnoughNumbersException();

	switch ( whichOperator()) {
		case ADD:
			this->out.top() += tmp;
			break;
		case SUBSTRACT:
			this->out.top() -= tmp; 
			break;
		case MULTIPLY:
			this->out.top() *= tmp;
			break;
		case DIVIDE:
			if ( tmp == 0 )
				throw CannotDivideBy0Exception();
			this->out.top() /= tmp; 
			break;
		default:
			std::cout << "Error: invalid operator!" << std::endl;
	}
	this->in.pop();
}

int	RPN::output() {
	if ( this->in.empty() ) throw NotEnoughNumbersException();

	int	arg_check = 0;
	int	calc_check = 0;

	while ( !this->in.empty() ) {
		arg_check++;
		if ( this->in.top() == "0" || this->in.top() == "+0" || this->in.top() == "-0" ) {
			this->out.push( 0 );
			this->in.pop();
		}
		else if ( atoi( this->in.top().c_str() ) != 0 ) {
			this->out.push( atoi( this->in.top().c_str()));
			this->in.pop();
		}
		else {
			calc_check++;
			if ( calc_check == arg_check )throw NotEnoughNumbersException();
			makeCalculation( ); 
		}
	}
	
	int result = this->out.top();
	
	this->out.pop();
	if ( !this->out.empty())
		throw TooManyNumbersException();
	return result;
}

const char *	RPN::TooManyNumbersException::what() const throw() {
	return "Error: The calculation cannot be done, you have entered too many numbers into the expression!";
}

const char *	RPN::CannotDivideBy0Exception::what() const throw() {
	return "Error: The calculation cannot be done, you cannot divide by 0!";
}

const char *	RPN::NotEnoughNumbersException::what() const throw() {
	return "Error: The calculation cannot be done, there are not enough numbers in the expression!";
}
