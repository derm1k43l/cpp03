/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:58 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/16 14:24:18 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap fool1("Fool1");
	ClapTrap fool2("Fool2");
	ClapTrap mfool;

	fool1.attack("Fool2");
	fool2.takeDamage(5);
	fool2.beRepaired(15);
	
	fool2.attack("Fool1");
	fool1.takeDamage(5);
	fool1.beRepaired(3);
	
	mfool.attack("Fool2");
	fool2.takeDamage(50);
	fool2.attack("Fool1");
	
	return (0);
}
