/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:26:25 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/11 15:43:23 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "IMateriaSource.hpp"

class MateriaSource:	public IMateriaSource
{
private:
	static const int	sourceSize = 4;
	AMateria			*_source[sourceSize];

public:
	MateriaSource	( void );
	MateriaSource	( MateriaSource const & );
	~MateriaSource	( void );

	MateriaSource &operator=	( MateriaSource const & );

	int	getSourceSize( void ) const;

	void		learnMateria( AMateria * );
	AMateria	*createMateria( std::string const & );
};
