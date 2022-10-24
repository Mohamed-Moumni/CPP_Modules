/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:17:02 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/24 10:19:24 by mmoumni          ###   ########.fr       */
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

Zombie*    zombieHorde( int N, std::string name );

#endif