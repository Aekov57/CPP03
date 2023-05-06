/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:42:22 by misimon           #+#    #+#             */
/*   Updated: 2023/05/06 16:03:53 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::sendMessage(const std::string color, const std::string msg) {
	std::cout << COLOR_MAGENTA << "[ScavTrap]" << COLOR_RESET;
	std::cout << color << " " + this->ClapTrap::getName() << " " + msg << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap(), gateMode(false) {
	ScavTrap::sendMessage(COLOR_CYAN, "created !");
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name), gateMode(false) {
	ScavTrap::sendMessage(COLOR_CYAN, "created !");
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other), gateMode(false) {
	ScavTrap::sendMessage(COLOR_CYAN, "copy !");
}

ScavTrap::~ScavTrap() {
	ScavTrap::sendMessage(COLOR_RED, "destroyed !");
}

void ScavTrap::attack(const std::string& target) {
	if (this->checkStatus())
	{
		this->sendMessage(COLOR_GREEN, "attacks " + target + ", causing " + this->getAttackDamage() + " points of damage !");
		this->consumeEnergy();
	}
}

void ScavTrap::guardGate() {
	if(this->gateMode == false)
	{
		ScavTrap::sendMessage(COLOR_BLUE, "gate mode ON !");
		this->gateMode = true;
	}
	else if (this->gateMode == true)
	{
		ScavTrap::sendMessage(COLOR_BLUE, "gate mode OFF !");
		this->gateMode = false;
	}
}