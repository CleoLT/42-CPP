/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:29:50 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/06 15:06:57 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "AForm.hpp"

class	RobotomyRequestForm : public AForm {
public :
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );

	virtual void	executeSpecificForm( void ) const;
};

#endif
