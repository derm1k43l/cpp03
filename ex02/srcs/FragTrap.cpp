/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:47:22 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/16 16:55:01 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 30;
	std::cout << "FragTrap " << name_ << " was created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << name_ << " was copied." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name_ << " was destroyed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this == &other) // prevent self-assignment
		return (*this);
	ClapTrap::operator=(other); // call the assignement operator of the parent class
	std::cout << "FragTrap " << name_ << " was assigned." << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name_ << " is asking for a high five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hitPoints_ > 0 && energyPoints_ > 0)
	{
		energyPoints_ --;
		std::cout << "FragTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << name_ << " can't attack. No energy points or hit points." << std::endl;
}

