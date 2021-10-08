/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:15:13 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/08 15:21:04 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string		brain("HI THIS IS BRAIN");
	std::string*	brainPTR = &brain;
	std::string&	brainREF = brain;

	std::cout << "brain address: " << &brain << std::endl;
	std::cout << "brain address using PTR: " << brainPTR << std::endl;
	std::cout << "brain address using REF: " << &brainREF << std::endl;

	std::cout << "brain in PTR: " << *brainPTR << std::endl;
	std::cout << "brain in REF: " << brainREF << std::endl;
	return (0);
}