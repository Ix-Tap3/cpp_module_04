/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 17:25:20 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 09:58:10 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class	Dog: public Animal
{
public:
	Dog		( void );
	Dog		( const Dog & );
	~Dog	( void );

	Dog	&operator= ( const Dog & );
	void	makeSound( void );
};
