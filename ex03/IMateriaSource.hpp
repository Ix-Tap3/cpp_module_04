/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:21:00 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/11 14:23:51 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual	~IMateriaSource( void ) { };

	virtual void		learnMateria( AMateria * ) = 0;
	virtual AMateria	*createMateria(std::string const & ) = 0;
};
