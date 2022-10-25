/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:40:05 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/25 22:10:12 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::complain(std::string level)
{
    switch(level[0] - 65) {
        case 'D' - 65:
            this->debug();
        case 'I' - 65:
            this->info();
        case 'W' - 65:
            this->warning();
        case 'E' - 65:
            this->error();
            break;
        default:
            this->other();
    }
}

void    Harl::debug( void )
{
    std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- "
         "ketchup burger. I really do!\n" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[ INFO ]\n"<< "I cannot believe adding extra bacon costs more money. You didn’t "
    "put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING ]\n"<< "I think I deserve to have some extra bacon for free. "
    "I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error( void )
{
    std::cout <<"[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::other(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}