#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    this->inputError = 0; 
}

Contact::~Contact(void)
{
    
}

bool Contact::check_Error(void)
{
    if (this->inputError)
        return (true);
    return (false);
}

Contact Contact ::save(void)
{
    Contact c;
    std::string fname, lname,nickname,phoneNumber, darkest_secret;
    
    std::cout << "Please Enter Your first Name: " << std::endl;
    getline(std::cin, fname);
    if (!fname.compare("") || std::cin.eof())
        c.inputError = 1;
    c.fname = fname;

    std::cout << "Please Enter Your last Name: " << std::endl;
    getline(std::cin, lname);
    if (!lname.compare("") || std::cin.eof())
        c.inputError = 1;
    c.lname = lname;
    
    std::cout << "Please Enter Your nickname: " << std::endl;
    getline(std::cin, nickname);
    if (!nickname.compare("") || std::cin.eof())
        c.inputError = 1;
    c.nickname = nickname;
    
    std::cout << "Please Enter Your PhoneNumber: " << std::endl;
    getline(std::cin, phoneNumber);
    if (!phoneNumber.compare("") || std::cin.eof())
        c.inputError = 1;
    c.phNumber = phoneNumber;

    std::cout << "Please Enter Your DarkestSecret: " << std::endl;
    getline(std::cin, darkest_secret);
    if (!darkest_secret.compare("") || std::cin.eof())
        c.inputError = 1;
    c.dark_secret = darkest_secret;
    return (c);
}

void    Contact::print_contacts(void)
{
    std::cout << this->fname << "|" << this->lname << "|" << this->nickname << "|" << this->phNumber << "|";
}

void    Contact::print_field(void)
{
    std::cout << std::setw(10) << this->fname << " " << std::setw(10) << this->lname << " " << std::setw(10) << this->nickname << std::endl;
}