/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:19:17 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/16 17:45:39 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other); // copy constructor
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap& other);

		void	attack(const std::string& target);
		void	whoAmI();

	private:
		std::string name_;
};