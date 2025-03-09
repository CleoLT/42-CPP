/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidencialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:29:58 by cle-tron          #+#    #+#             */
/*   Updated: 2025/03/09 11:36:56 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENCIALPARDONFORM_HPP
#define PRESIDENCIALPARDONFORM_HPP

#include <string>
#include "AForm.hpp"

class	PresidencialPardonForm : public AForm {
public :
	PresidencialPardonForm( void );
	PresidencialPardonForm( std::string target );
	PresidencialPardonForm( PresidencialPardonForm const & src );
	~PresidencialPardonForm( void );

	PresidencialPardonForm &	operator=( PresidencialPardonForm const & rhs );

	virtual void	execute( Bureaucrat const & executor ) const;
};

#endif
