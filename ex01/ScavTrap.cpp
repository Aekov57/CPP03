/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:42:22 by misimon           #+#    #+#             */
/*   Updated: 2023/05/08 17:40:27 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), gateMode(false) {
	sendMessage(COLOR_CYAN, "created !", COLOR_MAGENTA, "[ScavTrap]");
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name), gateMode(false) {
	ScavTrap::sendMessage(COLOR_CYAN, "created !", COLOR_MAGENTA, "[ScavTrap]");
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other), gateMode(false) {
	ScavTrap::sendMessage(COLOR_CYAN, "copy !", COLOR_MAGENTA, "[ScavTrap]");
}

ScavTrap::~ScavTrap() {
	ScavTrap::sendMessage(COLOR_RED, "destroyed !", COLOR_MAGENTA, "[ScavTrap]");
}

void ScavTrap::attack(const std::string& target) {
	if (this->checkStatus())
	{
		this->sendMessage(COLOR_GREEN, "attacks " + target + ", causing " + std::to_string(this->attackDamage) + " points of damage !", COLOR_MAGENTA, "[ScavTrap]");
		this->energyPoint -= 1;
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	this->sendMessage(COLOR_CYAN, "copy with = operator is used !", COLOR_MAGENTA, "[ScavTrap]");
	return *this;
}

void ScavTrap::guardGate() {
	if(this->checkStatus())
	{
		if(this->gateMode == false)
		{
			ScavTrap::sendMessage(COLOR_BLUE, "gate mode ON !", COLOR_MAGENTA, "[ScavTrap]");
			this->gateMode = true;
		}
		else if (this->gateMode == true)
		{
			ScavTrap::sendMessage(COLOR_BLUE, "gate mode OFF !", COLOR_MAGENTA, "[ScavTrap]");
			this->gateMode = false;
		}
	}

}