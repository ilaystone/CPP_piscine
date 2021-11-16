/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:25:03 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/16 00:38:36 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string		_target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &rhs);
	~PresidentialPardonForm(void);

	PresidentialPardonForm		&operator=(PresidentialPardonForm const &rhs);

	std::string		getTarget(void) const;
	virtual void	action(void) const;
};

#endif