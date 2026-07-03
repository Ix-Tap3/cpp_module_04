/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 07:48:42 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/30 16:17:32 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	Brain
{
private:
	static std::string	randomIdeas[12];

protected:
	std::string	ideas[100];

public:
	Brain	( void );
	Brain	( const Brain & );
	~Brain	( void );

	Brain	&operator=	( const Brain & );

	std::string	getRandomIdea( void ) const;

	void	fillIdeas( const std::string );
	void	fillRandomIdeas( int );
	void	displayIdeas( void );
};
