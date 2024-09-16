/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:56:11 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/16 14:23:25 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("MegaFool"), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
	std::cout << "ClapTrap " << name_ << " was created." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
	std::cout << "ClapTrap " << name_ << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name_(other.name_), hitPoints_(other.hitPoints_), energyPoints_(other.energyPoints_), attackDamage_(other.attackDamage_)
{
	std::cout << "ClapTrap " << name_ << " was copied." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name_ << " was destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other) // prevent self-assignment
		return (*this);
	name_ = other.name_;
	hitPoints_ = other.hitPoints_;
	energyPoints_ = other.energyPoints_;
	attackDamage_ = other.attackDamage_;
	std::cout << "ClapTrap " << name_ << " was assigned." << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints_ > 0 && energyPoints_ > 0)
	{
		energyPoints_ --;
		std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name_ << " can't attack. No energy points or hit points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

	if (amount > hitPoints_)
	{
		hitPoints_ = 0;
		std::cout << "ClapTrap " << name_ << " is dead. Hit points are 0." << std::endl;
	}
	else
	{
		hitPoints_ -= amount;
		std::cout << "ClapTrap " << name_ << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints_ > 0 && hitPoints_ > 0)
	{
		energyPoints_ --;
		hitPoints_ += amount;
		std::cout << "ClapTrap " << name_ << " is repaired by " << amount << " points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name_ << " can't be repaired.  No energy points or hit points." << std::endl;
}