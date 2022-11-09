/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:18:03 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/09 18:17:14 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap *frag = new FragTrap("moha");
    ClapTrap *claptrap = frag;
    claptrap->attack("abdo");
    ScavTrap scavtrap1;
    scavtrap1.attack("hmida");
    delete frag;
    return (0);
}