#include "Contact.hpp"
#include <iostream>
#include <iomanip>

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
    {
        c.inputError = 1;
        return c;
    }
    c.fname = fname;

    std::cout << "Please Enter Your last Name: " << std::endl;
    getline(std::cin, lname);
    if (!lname.compare("") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.lname = lname;
    
    std::cout << "Please Enter Your nickname: " << std::endl;
    getline(std::cin, nickname);
    if (!nickname.compare("") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.nickname = nickname;
    
    std::cout << "Please Enter Your PhoneNumber: " << std::endl;
    getline(std::cin, phoneNumber);
    if (!phoneNumber.compare("") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.phNumber = phoneNumber;

    std::cout << "Please Enter Your DarkestSecret: " << std::endl;
    getline(std::cin, darkest_secret);
    if (!darkest_secret.compare("") || std::cin.eof())
    {
        c.inputError = 1;
        return c;
    }
    c.dark_secret = darkest_secret;
    return (c);
}

void    Contact::print_contacts(void) const
{
    if (this->fname.size() <= 10)
        std::cout << std::setw(10) << this->fname << "|";
    else
        std::cout << fname.substr(0,9) << "." << "|";
    
    if (this->lname.size() <= 10)
        std::cout << std::setw(10) << this->lname << "|";
    else
        std::cout << lname.substr(0,9) << "." << "|";
    
    if (this->nickname.size() <= 10)
        std::cout << std::setw(10) << this->nickname << "|";
    else
        std::cout << nickname.substr(0,9) << "." << "|";
}

void    Contact::print_one_contact(void) const
{
    std::cout << "First Name :" << this->fname << std::endl;
    std::cout << "Last Name : "<< this->lname << std::endl;
    std::cout << "NickName :" << this->nickname << std::endl;
    std::cout << "PhoneNumber :" << this->phNumber << std::endl;
    std::cout << "DarkestSecrect :" << this->dark_secret << std::endl;
}
