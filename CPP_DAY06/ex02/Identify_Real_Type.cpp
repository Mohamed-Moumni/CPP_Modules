/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify_Real_Type.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:19:07 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/21 00:24:57 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify_Real_Type.hpp"

Base::~Base()
{
    
}

Base * generate(void)
{
    int rand_num;
    Base *ptr;

    srand(time(NULL)) ;
	rand_num = rand() % 3;
    if (rand_num == 1)
        ptr = new A();
    else if (rand_num == 2)
        ptr = new B();
    else
        ptr = new C();
    return (ptr);
}

void    identify(Base * p)
{
    A * ptr1;
    B * ptr2;
    C * ptr3;

    ptr1 = dynamic_cast < A * > (p);
    ptr2 = dynamic_cast < B * > (p);
    ptr3 = dynamic_cast < C * > (p);
    if (ptr1)
        std::cout << "A" << std::endl;
    else if (ptr2)
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void    identify(Base & p)
{
    try
    {
        (void)dynamic_cast < A & > (p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast < B & > (p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast < C & > (p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
            }
        }
    }
}