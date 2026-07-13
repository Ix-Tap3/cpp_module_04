/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:30:02 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/13 14:24:12 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWrongAnimal.hpp"
#include "Brain.hpp"

class	WrongCat: public AWrongAnimal
{
private:
	Brain	*_brain;

public:
	WrongCat	( void );
	~WrongCat	( void );
	WrongCat	( const WrongCat & );

	WrongCat	&operator=	( const WrongCat & );

	void		makeSound( void ) const;
	void		thinkALot( void ) const;
	std::string	think( void ) const;
};
