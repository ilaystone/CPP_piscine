/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:06:38 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/14 10:06:46 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice(void);
	Ice(Ice const &rhs);
	~Ice(void);

	Ice		&operator=(Ice const &rhs);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};

#endif