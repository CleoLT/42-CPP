/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-tron <cle-tron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:37:34 by cle-tron          #+#    #+#             */
/*   Updated: 2024/10/31 18:31:39 by cle-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"

class	PhoneBook {
private:
	Contact contact[8];
	int		size;

public:
	PhoneBook(void);
	~PhoneBook(void);
	int		get_size_contact();
	void	add_contact(int index);
	void	print_contact(int index);
	void	display_contacts();
};

#endif
