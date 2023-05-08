/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:57:57 by misimon           #+#    #+#             */
/*   Updated: 2023/05/08 17:38:50 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap b("Luke");
	b.attack("Gerard");
	b.takeDamage(10);
	ScavTrap c;
	c = b;
	c.guardGate();
	c.guardGate();
	c.beRepaired(1);
	return 0;
}