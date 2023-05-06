/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:57:57 by misimon           #+#    #+#             */
/*   Updated: 2023/05/06 15:54:27 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Jean");
	a.attack("Billy");
	a.takeDamage(1);
	a.beRepaired(20);
	a.attack("Hector");
	ClapTrap b(a);
	b.takeDamage(100);
	a.attack("Hector");
	b.attack("Hector");
	return 0;
}