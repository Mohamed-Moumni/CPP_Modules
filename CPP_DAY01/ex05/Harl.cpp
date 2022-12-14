/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:27:09 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/27 09:11:15 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::complain(std::string level)
{
    poinMemberFunc arr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    i = 0;
    while (levels[i] != level && i < 4)
        i++;
    if (i != 4)
        (this->*arr[i])();
}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- "
         "ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t "
    "put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. "
    "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
