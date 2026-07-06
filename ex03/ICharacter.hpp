/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:34:15 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 11:44:51 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter	( void ) {}
	
	virtual std::string const	&getName( void ) const = 0;
	virtual void				equip( AMateria & ) = 0;
	virtual void				unequip( int ) = 0;
	virtual void				use( int, ICharacter & ) = 0;
};
