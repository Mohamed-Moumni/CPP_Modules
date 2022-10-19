#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    this->inputError = 0; 
}

Contact::~Contact(void)
{
    
}

int Contact::check_Error(void)
{
    if (this->inputError)
        return (1);
    return (0);
}

Contact Contact ::save(void)
{
    Contact c;
    std::string fname, lname,nickname,phoneNumber, darkest_secret;
    std::cout << "Please Enter Your first Name: " << std::endl;
    getline(std::cin, fname);
    if (!fname.compare("\n") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.fname = fname;
    std::cout << "Please Enter Your last Name: " << std::endl;
    getline(std::cin, lname);
    if (!lname.compare("\n") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.lname = lname;
    std::cout << "Please Enter Your nickname: " << std::endl;
    getline(std::cin, nickname);
    if (!nickname.compare("\n") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.nickname = nickname;
    std::cout << "Please Enter Your PhoneNumber: " << std::endl;
    getline(std::cin, phoneNumber);
    if (!phoneNumber.compare("\n") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.phNumber = phoneNumber;
    std::cout << "Please Enter Your DarkestSercret: " << std::endl;
    getline(std::cin, darkest_secret);
    if (!dark_secret.compare("\n") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.dark_secret = darkest_secret;
    return (c);
}

void    Contact::print_contact(void)
{
    std::cout << this->fname << "|" << this->lname << "|" << this->nickname << "|" << this->phNumber << "|";
}

void    Contact::print_field(void)
{
    std::cout << this->fname << " " << this->lname << " " << this->nickname << std::endl;
}