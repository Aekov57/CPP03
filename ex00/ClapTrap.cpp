/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:19:59 by misimon           #+#    #+#             */
/*   Updated: 2023/05/08 17:18:31 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void ClapTrap::sendMessage(const std::string color, const std::string msg) {
	std::cout << ClapTrapSTR;
	std::cout << color << " " + this->name << " " + msg << std::endl;
}

bool ClapTrap::checkStatus() {
	if (this->energyPoint <= 0)
		this->sendMessage(COLOR_RED, "has no energy left in his battery !");
	else if (this->hitPoint <= 0)
		this->sendMessage(COLOR_RED, "is broken !");
	else
		return(true);
	return(false);
}

ClapTrap::ClapTrap() : name("Jean Default"), hitPoint(10), energyPoint(10), attackDamage(0) {
	this->sendMessage(COLOR_CYAN, "created !");
}
	
ClapTrap::ClapTrap(const std::string str) : name(str), hitPoint(10), energyPoint(10), attackDamage(0) {
	this->sendMessage(COLOR_CYAN, "created !");
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->sendMessage(COLOR_CYAN, "copy !");
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->name = other.name;
	this->hitPoint = other.hitPoint;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	this->sendMessage(COLOR_CYAN, "copy with = operator is used !");
	return *this;
}

ClapTrap::~ClapTrap(){
	this->sendMessage(COLOR_RED, "Destroyed !");
}

void ClapTrap::attack(const std::string& target) {
	if (this->checkStatus())
	{
		this->sendMessage(COLOR_GREEN, "attacks " + target + ", causing " + std::to_string(this->attackDamage) + " points of damage !");
		this->energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(this->checkStatus())
	{
		this->sendMessage(COLOR_YELLOW, "take " + std::to_string(amount) + " points of damage !");
		this->hitPoint -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->checkStatus())
	{
		this->sendMessage(COLOR_WHITE, "repair himself " + std::to_string(amount) + " hit points !");
		this->energyPoint--;
		this->hitPoint += amount;
	}
}