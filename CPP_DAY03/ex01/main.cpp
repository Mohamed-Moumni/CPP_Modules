/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:18:03 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/07 15:50:46 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav1("moha");
    ScavTrap scav2("abdo");

    scav1.guardGate();
    scav1.attack("abdo");
    scav1.attack("abdo");
    scav1.attack("abdo");
    scav1.attack("abdo");
    scav1.attack("abdo");
    scav1.attack("abdo");
    scav1.attack("abdo");
    scav2.takeDamage(scav1.get_AttackDamage());
    scav2.takeDamage(scav1.get_AttackDamage());
    scav2.takeDamage(scav1.get_AttackDamage());
    scav2.takeDamage(scav1.get_AttackDamage());
    scav2.takeDamage(scav1.get_AttackDamage());
    scav2.takeDamage(scav1.get_AttackDamage());
    scav2.takeDamage(scav1.get_AttackDamage());
    std::cout << scav1  << scav2;
    return (0);
}