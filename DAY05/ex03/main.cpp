/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:23 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 09:58:06 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int		main(void)
{
	Intern		someRandomKid;
	Bureaucrat  god("god", 1);
	Form		*rrf;

	rrf = someRandomKid.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		rrf->beSigned(god);
		rrf->execute(god);
		delete rrf;
	}
	rrf = someRandomKid.makeForm("presidential pardon", "kidnapper");
	if (rrf)
	{
		rrf->beSigned(god);
		rrf->execute(god);
		delete rrf;
	}
	rrf = someRandomKid.makeForm("rain request", "forest");
	if (rrf)
	{
		rrf->beSigned(god);
		rrf->execute(god);
		delete rrf;
	}
	return (0);
}