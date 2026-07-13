/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 10:33:16 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 11:39:40 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>
# include "ICharacter.hpp"

class	AMateria
{
protected:
	std::string	type;

public:
	AMateria			( void );
	AMateria			( AMateria const & );
	AMateria			( std::string const & );
	virtual ~AMateria	( void );

	AMateria &operator=	( AMateria const & );

	std::string const	&getType( void ) const;

	virtual AMateria	*clone( void ) const = 0;
	virtual void		use( ICharacter & );
};
