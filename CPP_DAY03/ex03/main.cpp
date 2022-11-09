/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:15:18 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/09 18:23:18 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"
#include"ClapTrap.hpp"
#include"FragTrap.hpp"
#include"ScavTrap.hpp"

int main(void)
{
    ClapTrap *ptr = new DiamondTrap("moha");
    ptr->attack("cristiano");
    delete ptr;
}