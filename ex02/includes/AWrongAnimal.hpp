/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:25:25 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/13 14:21:40 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	AWrongAnimal
{
protected:
	std::string	type;

public:
	AWrongAnimal			( void );
	virtual ~AWrongAnimal	( void );
	AWrongAnimal			( const AWrongAnimal & );

	AWrongAnimal	&operator=	( const AWrongAnimal & );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const = 0;
};
