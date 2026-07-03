/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 17:25:20 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/03 16:06:55 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog: public AAnimal
{
private:
	Brain	*_brain;

public:
	Dog		( void );
	Dog		( const Dog & );
	~Dog	( void );

	Dog	&operator= ( const Dog & );

	void		makeSound( void );
	void		thinkALot( void );
	std::string	think( void );
};
