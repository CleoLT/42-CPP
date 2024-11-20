/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:38:30 by cle-tron          #+#    #+#             */
/*   Updated: 2024/11/20 18:45:06 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <string>
#include <fstream>

class	FileReplace {
private:
	std::string			ifname;
	std::string		ofname;
	std::ifstream	ifs;
	std::ofstream	ofs;

public:
	FileReplace( std::string name );
	~FileReplace( void );
	bool	checkInputFile( void ) const;
	void	copyInputFile( void );
};

#endif
