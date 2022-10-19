#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

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
        void    print_contacts(void);
        bool    check_Error(void);
        void    print_field(void);
};

#endif


