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

class	WrongCat: public WrongAnimal
{
public:
	WrongCat	( void );
	~WrongCat	( void );
	WrongCat	( const WrongCat & );

	WrongCat	&operator=	( const WrongCat & );

	void	makeSound( void ) const;
};
