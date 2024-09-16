/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:12:50 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/16 16:27:36 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include <iostream>

// default constructor
ScavTrap::ScavTrap() : ClapTrap("Default")
{
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
	std::cout << "ScavTrap " << name_ << " was created." << std::endl;
}

// Parameter constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
	std::cout << "ScavTrap " << name_ << " was created." << std::endl;
}

// copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << name_ << " was copied." << std::endl;
}

// destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name_ << " was destroyed." << std::endl;
}

// assignement operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other) // prevent self-assignment
		return (*this);
	ClapTrap::operator=(other); // call the assignement operator of the parent class
	std::cout << "ScavTrap " << name_ << " was assigned." << std::endl;
	return (*this);
}

// Overload the attack function
void ScavTrap::attack(const std::string& target)
{
	if (hitPoints_ > 0 && energyPoints_ > 0)
	{
		energyPoints_ --;
		std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name_ << " can't attack. No energy points or hit points." << std::endl;
}

// New function for ScavTrap
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name_ << " is in Gate keeper mode." << std::endl;
}