/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 09:46:47 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/30 16:19:38 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
private:
	Brain	*_brain;

public:
	Cat		( void );
	Cat		( const Cat & );
	~Cat	( void );

	Cat	&operator=	( const Cat &);

	void		makeSound( void ) const;
	void		thinkALot( void ) const;
	std::string	think( void ) const;
};
