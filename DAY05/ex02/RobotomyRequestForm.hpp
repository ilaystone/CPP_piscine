/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:08:42 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 08:20:17 by ikhadem          ###   ########.fr       */
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
	RobotomyRequestForm(void);
public:
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm(void);

	virtual void	action(void) const;
};

#endif