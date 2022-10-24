/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:42:01 by mmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 08:42:03 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
    private:
        int     inputError;
        std:: string fname;
        std:: string lname;
        std:: string nickname;
        std:: string phNumber;
        std:: string dark_secret;
    public:
        Contact(void);
        ~Contact(void);
        Contact save(void);
        void    print_contacts(void) const;
        bool    check_Error(void);
        void    print_one_contact(void) const;
};

#endif


