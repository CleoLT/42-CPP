/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:38:38 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/21 15:19:21 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <fstream>
#include <string>
#include <iostream>

FileReplace::FileReplace( std::string name, std::string s1, std::string s2) :   ifname(name), _s1(s1), _s2(s2), ifs(name.c_str()) { }

FileReplace::~FileReplace( void ) {}

bool	FileReplace::checkInputFile( void ) const{
	if ( this->ifs.fail() ) {
		std::cerr << "Input filename does not exist, try again!" << std::endl;
		return false;
	}
	return true;
}

bool	FileReplace::openOutputFile( void ) {
	this->ofname = this->ifname + ".replace";
	this->ofs.open(this->ofname.c_str());
	if ( this->ofs.fail() ) {
		std::cerr << "Error creating file, try again!" << std::endl;
		return false;
	}
	return true;
}

void	FileReplace::copyAndReplaceContent( void ) {
	std::string	input;
	std::string	tmp;
	std::size_t	found;
		
	while (1) {
		found = 0;
		std::getline(this->ifs, input);
		while (1) {
			found = input.find(this->_s1, found);
			if (found == std::string::npos)
				break;
			tmp = input.substr(0, found) + input.substr(found + _s1.length());
			tmp.insert(found, _s2);
			input = tmp;
			found++;
		}
		this->ofs << input;
		if (this->ifs.eof())
			break;
		this->ofs.put('\n');
	}
}

void	FileReplace::closeIfs( void ) {
	this->ifs.close();
}

void	FileReplace::closeOfs( void ) {
	this->ofs.close();
}
