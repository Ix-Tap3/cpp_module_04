/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:29:56 by pcaplat           #+#    #+#             */
/*   Updated: 2026/04/24 16:40:33 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	Animal
{
protected:
	std::string	type;

public:
	Animal	(void);
	Animal	(const Animal &);
	~Animal	(void);

	Animal	&operator= (const Animal &);

	std::string	getType(void);
	virtual void	makeSound(void);
};
