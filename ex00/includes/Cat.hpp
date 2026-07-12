/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 09:46:47 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 09:50:47 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class	Cat: public Animal
{
public:
	Cat		( void );
	Cat		( const Cat & );
	~Cat	( void );

	Cat	&operator=	( const Cat &);

	void	makeSound( void ) const;
};
