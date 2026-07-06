/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat </var/spool/mail/pcaplat>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:43:38 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/04 12:30:54 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character:	public ICharacter
{
private:
	static const int	inventorySize = 4;
	std::string	_name;
	AMateria	*_inventory[inventorySize];
	AMateria	*_saveMateria[inventorySize];

public:
	Character	( void );
	Character	( std::string const );
	Character	( Character const & );
	~Character	( void );

	Character	&operator= ( Character const & );

	std::string const	&getName( void ) const;
	int	const			getInventorySize( void ) const;

	void	equip( AMateria * );
	void	unequip( int );
	void	use( int, ICharacter & );
};
