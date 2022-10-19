#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    this->count = 0;
    this->index = 0;
}

PhoneBook::~PhoneBook(void)
{

}

void PhoneBook::add_contact(Contact c)
{
    if (this->count == 8)
    {
        this->count = 0;
        this->contact[this->count] = c;
        this->count++;
    }
    else
    {
        this->contact[this->count] = c;
        this->count++;
    }
    this->index++;
}

void    PhoneBook::search_contact(void)
{
    std::string index;

    if (!this->index)
    {
        std::cout << "There is no Contact Saved in The PhonBook add one using ADD Command or exit the program using EXIT Command." << std::endl;
        return ;
    }
    std::cout << "============================================\n";
    std::cout << "|Index   |FirstName|LastName|Nickname|" << std::endl;
    std::cout << "============================================\n";
    for (int i = 0; i < this->index ; i++)
    {
        std::cout<< "|" << i << "|";
        this->contact[i].print_contacts();
        std::cout << std::endl;
    }
    std::cout << "Enter The Index of the Contact You want to search." << std::endl;
    getline(std::cin, index);
    if(index.size() > 1 || (index[0] < '0' && index[0] > '7'))
        std::cout << "The Entered Index is not valid." << std::endl;
    else
    {
        this->contact[index[0] - '0'].print_field();
    }
}
