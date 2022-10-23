/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:45:46 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/23 22:03:32 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie (void);
        ~Zombie (void);
        void announce(void);
        void setter( std::string  name);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif