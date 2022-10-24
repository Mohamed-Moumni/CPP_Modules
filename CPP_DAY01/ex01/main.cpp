/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:20:08 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/24 10:36:16 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombies;
    
    zombies = zombieHorde(10, "mohamed");
    for (int i=0;i < 10;i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;
    return 0;
}