/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 07:48:42 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/30 08:11:30 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	Brain
{
protected:
	std::string	ideas[100];

public:
	Brain	( void );
	Brain	( const Brain & );
	~Brain	( void );

	Brain	&operator=	( const Brain & );

	void	fillIdeas( const std::string );
};
