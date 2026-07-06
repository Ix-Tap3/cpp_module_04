/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:19:26 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 11:22:19 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure:	public AMateria
{
public:
	Cure	( void );
	Cure	( Cure const & );
	~Cure	( void );

	Cure &operator=	( Cure const & );

	Cure	*clone( void ) const;
	void	use( ICharacter & );
};
