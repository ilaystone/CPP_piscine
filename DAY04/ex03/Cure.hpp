/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:58:03 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:07:25 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure(void);
	Cure(Cure const &rhs);
	~Cure(void);

	Cure		&operator=(Cure const &rhs);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};
#endif