/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:57:57 by misimon           #+#    #+#             */
/*   Updated: 2023/05/06 16:07:27 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ClapTrap a("Jean");
	a.attack("Billy");
	a.takeDamage(1);
	a.beRepaired(20);
	ScavTrap b("Luke");
	b.attack("Gerard");
	b.takeDamage(100);
	ScavTrap c(b);
	c.guardGate();
	c.guardGate();
	c.beRepaired(1);
	a.attack("hello");
	return 0;
}