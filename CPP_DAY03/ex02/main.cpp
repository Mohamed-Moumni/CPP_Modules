/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:18:03 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/11 09:03:35 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap *frag = new ScavTrap;
    ClapTrap *frag1 = new FragTrap;
    frag->attack("cristano");
    frag1->attack("himda");
    delete frag;
    delete frag1;
    return (0);
}