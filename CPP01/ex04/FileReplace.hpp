/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:38:30 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/21 15:04:17 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <string>
#include <fstream>

class	FileReplace {
private:
	std::string		ifname;
	std::string		ofname;
	std::string		_s1;
	std::string		_s2;
	std::ifstream	ifs;
	std::ofstream	ofs;

public:
	FileReplace( std::string name, std::string s1, std::string s2);
	~FileReplace( void );
	bool	checkInputFile( void ) const;
	bool	openOutputFile( void );
	void	copyAndReplaceContent( void );
	void	closeIfs( void );
	void	closeOfs( void );
};

#endif
