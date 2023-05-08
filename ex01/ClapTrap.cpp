/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:19:59 by misimon           #+#    #+#             */
/*   Updated: 2023/05/08 15:37:45 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void ClapTrap::sendMessage(const std::string color, const std::string msg, std::string modelColor, std::string model) {
	std::cout << modelColor + model + COLOR_RESET;
	std::cout << color << " " + this->name << " " + msg << std::endl;
}

bool ClapTrap::checkStatus() {
	if (this->energyPoint <= 0)
		this->sendMessage(COLOR_RED, "has no energy left in his battery !", COLOR_YELLOW, "[ClapTrap]");
	else if (this->hitPoint <= 0)
		this->sendMessage(COLOR_RED, "is broken !", COLOR_YELLOW, "[ClapTrap]");
	else
		return(true);
	return(false);
}

ClapTrap::ClapTrap() : name("Jean Default"), hitPoint(100), energyPoint(50), attackDamage(20) {
	this->sendMessage(COLOR_CYAN, "created !", COLOR_YELLOW, "[ClapTrap]");
}
	
ClapTrap::ClapTrap(const std::string str) : name(str), hitPoint(100), energyPoint(50), attackDamage(20) {
	this->sendMessage(COLOR_CYAN, "created !", COLOR_YELLOW, "[ClapTrap]");
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->attackDamage = other.energyPoint;
	this->sendMessage(COLOR_CYAN, "copy !", COLOR_YELLOW, "[ClapTrap]");
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	this->sendMessage(COLOR_CYAN, "copy with = operator is used !", COLOR_YELLOW, "[ClapTrap]");
	return *this;
}

ClapTrap::~ClapTrap() {
	this->sendMessage(COLOR_RED, "Destroyed !", COLOR_YELLOW, "[ClapTrap]");
}

void ClapTrap::attack(const std::string& target) {
	if (this->checkStatus())
	{
		this->sendMessage(COLOR_GREEN, "attacks " + target + ", causing " + std::to_string(this->attackDamage) + " points of damage !", COLOR_YELLOW, "[ClapTrap]");
		this->energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(this->checkStatus())
	{
		this->sendMessage(COLOR_YELLOW, "take " + std::to_string(amount) + " points of damage !", COLOR_YELLOW, "[ClapTrap]");
		this->hitPoint -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->checkStatus())
	{
		this->sendMessage(COLOR_WHITE, "repair himself " + std::to_string(amount) + " hit points !", COLOR_YELLOW, "[ClapTrap]");
		this->energyPoint--;
		this->hitPoint += amount;
	}
}