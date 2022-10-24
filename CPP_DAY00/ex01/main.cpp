/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:42:09 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 08:42:11 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook   phone_book;
    std::string      input;

    std::cout << "Welcome To The AwesomePhoneBook Program." << std::endl;
    std::cout << "You Can Choose one of the following Operation." << std::endl;
    std::cout << "ADD, SEARCH, EXIT" << std::endl;
    while (getline(std::cin,input))
    {
        if (std::cin.eof())
            break ;
        if (!input.compare("ADD"))
        {
            std::cout << "You Have to complete all your field to save the contact." << std::endl;
            Contact c;
            c = c.save();
            if (!c.check_Error())
                phone_book.add_contact(c);
        }
        else if (!input.compare("SEARCH"))
        {
            phone_book.search_contact();
        }
        else if (!input.compare("EXIT"))
        {
            break ;
        }
        if (!std::cin.eof())
        {
            std::cout << "You Can Choose one of the following Operation." << std::endl;
            std::cout << "ADD, SEARCH, EXIT." << std::endl;
        }
    }
    return (0);
}
