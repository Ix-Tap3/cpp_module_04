/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:25:25 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 18:23:12 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal				( void );
	virtual ~WrongAnimal	( void );
	WrongAnimal				( const WrongAnimal & );

	WrongAnimal	&operator=	( const WrongAnimal & );

	std::string		getType( void );
	virtual void	makeSound( void );
};
