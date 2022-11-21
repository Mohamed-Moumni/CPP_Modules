/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConveScalar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:15:32 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/21 17:43:47 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConveScalar.hpp"

ConveScalar::ConveScalar()
{

}

ConveScalar::~ConveScalar()
{

}

ConveScalar::ConveScalar( ConveScalar & src)
{
    *this = src;
}

ConveScalar & ConveScalar::operator=( ConveScalar & rhs)
{
    if (this != &rhs)
    {

    }
    return *this;
}

t_enum  ConveScalar::get_type(void)
{
    return (this->num);      
}

void    ConveScalar::set_int(int num)
{
    this->integer = num;      
}

void    ConveScalar::set_double(double num)
{
    this->doubl = num;
}

void    ConveScalar::set_float(float num)
{
    this->floa = num;
}

void    ConveScalar::set_char(char num)
{
    this->c = num;
}

int     ConveScalar::get_intger(void)
{
    return (this->integer);
}

double ConveScalar::get_double(void)
{
    return (this->doubl);
}

float   ConveScalar::get_float(void)
{
    return (this->floa);
}

char    ConveScalar::get_char(void)
{
    return (this->c);
}


bool    ConveScalar::is_number(char *str)
{
    int i;

    i = 0;
    while (isspace(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] && isdigit(str[i]))
        i++;
    this->num = INT;
    if (str[i] == '.')
    {
        this->num = DOUBLE;
        i++;
    }
    while (isdigit(str[i]))
        i++;
    if (str[i] == 'f')
    {
        i++;
        this->num = FLOAT;
    }
    if (str[i])
        throw InvalidInput();
    return (true);
}

bool    ConveScalar::is_char(char *str)
{
    int i;

    i = 0;
    while (isspace(str[i]))
        i++;
    if (str[i+1])
        throw InvalidInput();
    this->num = CHAR;
    this->c = str[i];
    return (true);      
}

void    ConveScalar::is_inf(char *str)
{
    int i;

    i = 0;
    while (isspace(str[i]))
        i++;
    while (str[i] == '+' ||  str[i] == '-')
        i++;
    if (!strcmp(&str[i],"nan") || !strcmp(&str[i],"inf"))
    {
        num = NAN;
        return ;
    }
    if (!strcmp(&str[i],"nanf") || !strcmp(&str[i],"inff"))
    {
        num = NANF;
        return ;
    }
    throw InvalidInput();
}

void    ConveScalar::check_input(char *str)
{
    try
    { is_number(str); }
    catch(const std::exception& e)
    {
        try
        { is_char(str); }
        catch(const std::exception& e)
        {
            try
            { is_inf(str); }
            catch(const std::exception& e)
            { throw InvalidInput();}
        }
    }   
}

void    ConveScalar::stat_cast(t_enum type)
{
    if (type == INT)
    {
        floa = static_cast <float> (integer);
        doubl = static_cast <double> (integer);
        c = static_cast <char> (integer);
    }
    else if(type == DOUBLE)
    {
        integer = static_cast <int> (doubl);
        floa = static_cast <float> (doubl);
        c = static_cast <char> (doubl);
    }
    else if (type == FLOAT)
    {
        integer = static_cast <int> (floa);
        doubl = static_cast <double> (floa);
        c = static_cast <char> (floa);
    }
    else
    {
        integer = static_cast <int> (c);
        floa = static_cast <float> (c);
        doubl = static_cast <double> (c);
    }
}

void ConveScalar::print_all(void)
{
    if (num != NAN && num != NANF)
    {
        std::cout << "char: ";
        if (isprint(c))
            std::cout << c << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
        std::cout << "int: " << integer << std::endl;
        std::cout << "float: " << std::fixed << floa <<"f"<< std::endl;
        std::cout << "double: " << doubl << std::endl;
    }
    else
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        if (num == NANF)
        {
            std::cout << "float: " << "nanf" << std::endl;
            std::cout << "double: " << "nanf" << std::endl;   
        }
        else
        {
            std::cout << "float: " << "nan" << std::endl;
            std::cout << "double: " << "nan" << std::endl;
        }
    }
}
