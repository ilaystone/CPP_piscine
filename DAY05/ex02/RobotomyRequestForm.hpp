/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:08:42 by ikhadem           #+#    #+#             */
/*   Updated: 2021/11/15 23:44:16 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string			_target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm(void);

	RobotomyRequestForm		&operator=(RobotomyRequestForm const &rhs);

	std::string	const	getTarget(void) const;
	void				setTarget(std::string &target);
	virtual void		action(void) const;
};

#endif