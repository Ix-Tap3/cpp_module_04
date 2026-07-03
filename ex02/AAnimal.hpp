/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcaplat <pcaplat@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:29:56 by pcaplat           #+#    #+#             */
/*   Updated: 2026/07/03 16:00:21 by pcaplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class	AAnimal
{
protected:
	std::string	type;

public:
	AAnimal				(void);
	AAnimal				(const AAnimal &);
	virtual	~AAnimal	(void);

	AAnimal	&operator= (const AAnimal &);

	std::string		getType(void);
	virtual void	makeSound(void) = 0;
};
