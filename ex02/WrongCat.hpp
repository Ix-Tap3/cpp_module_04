/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:30:02 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 17:09:42 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class	WrongCat: public WrongAnimal
{
private:
	Brain	*_brain;

public:
	WrongCat	( void );
	~WrongCat	( void );
	WrongCat	( const WrongCat & );

	WrongCat	&operator=	( const WrongCat & );

	void		makeSound( void );
	void		thinkALot( void );
	std::string	think( void );
};
