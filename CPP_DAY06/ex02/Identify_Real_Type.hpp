/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify_Real_Type.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:19:09 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/21 00:25:22 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_REAL_TYPE_HPP
#define IDENTIFY_REAL_TYPE_HPP

#include <iostream>

class Base
{
    public:
        virtual ~Base(); 
};


class A:public Base
{
    
};

class B:public Base
{

};

class C:public Base
{
    
};

Base *  generate(void);
void    identify(Base * p);
void    identify(Base & p);

#endif