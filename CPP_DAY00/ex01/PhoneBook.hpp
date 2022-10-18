#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        void    add_contact(Contact c);
        void    search_contact(void);

};
#endif
