/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:21:44 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/16 17:47:22 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string& name)
	: ScavTrap(name + "_scav"), FragTrap(name + "_frag"), name_(name)
{
	std::cout << "DiamondTrap " << name_ << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ScavTrap(other), FragTrap(other), name_(other.name_)
{
	std::cout << "DiamondTrap " << name_ << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name_ << " destroyed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
	name_ = other.name_;
	std::cout << "DiamondTrap " << name_ << " created" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name_ << " and my ClapTrap name is " << FragTrap::name_ << "." << std::endl;
}
