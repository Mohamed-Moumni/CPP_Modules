/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConveScalar.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:12:23 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/21 17:41:29 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVESCALAR_HPP
#define CONVESCALAR_HPP

#include <iostream>
#include <exception>
#include <cctype>

typedef enum {
    CHAR,
    INT,
    DOUBLE,
    FLOAT,
    NAN,
    NANF
}t_enum;


class ConveScalar
{
    public:
        class InvalidInput:public std::exception
        {
            public:
                const char *what() const throw()
                { return "Error: Invalid Input Error."; }  
        };
        ConveScalar();
        ~ConveScalar();
        ConveScalar( ConveScalar &src);
        ConveScalar & operator=( ConveScalar & rhs );
        void    check_input(char *str);
        bool    is_number(char *str);
        bool    is_char(char *str);
        void    is_inf(char *str);
        void    set_int(int number);
        void    set_double(double number);
        void    set_float(float number);
        void    set_char(char c);
        t_enum  get_type(void);
        int     get_intger(void);
        double  get_double(void);
        float   get_float(void);
        char    get_char(void);
        void    print_all();
        void    stat_cast(t_enum);
    private:
        t_enum num;
        char    c;
        int     integer;
        double  doubl;
        float   floa;              
};

#endif