/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 09:46:47 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/13 14:22:55 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat: public AAnimal
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
