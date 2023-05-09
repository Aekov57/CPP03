/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:12:03 by misimon           #+#    #+#             */
/*   Updated: 2023/05/09 11:17:19 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->sendMessage(COLOR_CYAN, "created !", COLOR_BLACK, "[FragTrap]");
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	this->sendMessage(COLOR_CYAN, "created !", COLOR_BLACK, "[FragTrap]");
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	this->sendMessage(COLOR_CYAN, "created !", COLOR_BLACK, "[FragTrap]");
}

FragTrap::~FragTrap() {
	this->sendMessage(COLOR_RED, "destroyed !", COLOR_BLACK, "[FragTrap]");
}

void FragTrap::highFivesGuys(void) {
	if(this->checkStatus())
		this->sendMessage(COLOR_MAGENTA, "want a High Fives !", COLOR_BLACK, "[FragTrap]");
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	this->sendMessage(COLOR_CYAN, "copy with = operator is used !", COLOR_BLACK, "[FragTrap]");
	return *this;
}


void FragTrap::attack(const std::string& target) {
	if (this->checkStatus())
	{
		this->sendMessage(COLOR_GREEN, "attacks " + target + ", causing " + std::to_string(this->attackDamage) + " points of damage !", COLOR_BLACK, "[FragTrap]");
		this->energyPoint -= 1;
	}
}