/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:14:30 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 09:16:52 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

# define MAX_CONTACTS 8

typedef enum e_commands
{
	p_exit,
	p_add,
	p_search,
	p_error,
}	t_commands;

class Phonebook
{
private:
	int			_index;
	Contact		_list[8];

	void			setContact(Contact c);
	Contact			promptContactInputs(void);
	t_commands		promptCommand(void);
	void			execute_command(t_commands c);
	void			execute_add(void);
	void			execute_search(void);

public:
	Phonebook(void);
	~Phonebook();

	void			StartLine(void);
};

#endif