/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:42:24 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 08:42:27 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        int count;
        Contact contact[8];
        int index;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void        add_contact(Contact c);
        void        search_contact(void);
        void        exit_program(void);
};
#endif
