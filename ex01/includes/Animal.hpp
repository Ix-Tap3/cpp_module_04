/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:29:56 by pcaplat           #+#    #+#             */
/*   Updated: 2026/06/29 10:23:23 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	Animal
{
protected:
	std::string	type;

public:
	Animal			(void);
	Animal			(const Animal &);
	virtual	~Animal	(void);

	Animal	&operator= (const Animal &);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};
