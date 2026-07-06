/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 10:58:27 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 11:22:41 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AMateria.hpp"

class	Ice:	public AMateria
{
public:
	Ice		( void );
	Ice		( Ice const & );
	~Ice	( void );

	Ice &operator=	( Ice const & );

	Ice	*clone( void ) const;
};
