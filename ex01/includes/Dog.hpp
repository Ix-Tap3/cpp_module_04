/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 17:25:20 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/30 16:41:29 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
private:
	Brain	*_brain;

public:
	Dog		( void );
	Dog		( const Dog & );
	~Dog	( void );

	Dog	&operator= ( const Dog & );

	void		makeSound( void ) const;
	void		thinkALot( void ) const;
	std::string	think( void ) const;
};
