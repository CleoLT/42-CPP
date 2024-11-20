/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:38:38 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/20 19:00:59 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <fstream>
#include <string>
#include <iostream>

FileReplace::FileReplace( std::string name ) : ifname(name), ifs(name.c_str()) {
}

FileReplace::~FileReplace( void ) {}

bool	FileReplace::checkInputFile( void ) const{
	if ( this->ifs.fail() ) {
		std::cerr << "Input filename does not exist, try again!" << std::endl;
		return false;
	}
	return true;
}

void	FileReplace::copyInputFile( void ) {
	this->ofname = this->ifname + ".replace";

	std::cout << "newname es " << this->ofname <<std::endl;

	this->ofs.open(this->ofname.c_str());
}




