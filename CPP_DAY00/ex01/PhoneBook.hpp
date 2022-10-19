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
