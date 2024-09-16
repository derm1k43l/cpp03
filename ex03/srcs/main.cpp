/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:58 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/16 17:45:28 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main()
{
	DiamondTrap fool1("Fool1");

	fool1.attack("target");
	
	fool1.highFivesGuys();
	
	return (0);
}
