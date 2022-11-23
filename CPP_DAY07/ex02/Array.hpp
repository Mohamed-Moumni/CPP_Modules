/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:10:09 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/23 19:09:57 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include<exception>

template<typename T>
class Array
{
    public:
        class IndexException: public std::exception
        {
            public:
                const char * what() const throw()
                { return "Invalid Index access"; }
        };
        Array();
        Array(unsigned int n);
        Array( Array const & src);
        Array & operator=(Array const & rhs);
        T & operator[]( unsigned int rhs);
        T   operator[]( unsigned int rhs) const;
        unsigned int    size(void) const;
        unsigned int    get_len(void) const;
    private:
        T   *array;
        unsigned int _size;
};

template<typename T> Array<T>::Array()
{
    array = new T;
    _size = 0;
}

template<typename T> Array<T>::Array(unsigned int n )
{
    array = new T[n];
    _size = n;
    for (unsigned int i = 0; i < n ;i++)
    {
        array[i] = 0;
    }
}

template<typename T> Array<T>::Array( Array const & src )
{
    *this = src;
}

template<typename T> unsigned int Array<T>::get_len( void ) const
{
    return (_size);
}

template<typename T> Array<T> & Array<T>::operator=( Array const & rhs )
{
    if (this != &rhs)
    {
        array = new T[rhs.get_len()];
        for (unsigned int i = 0; i < rhs.get_len(); i++)
        {
            array[i] = rhs.array[i];
        }
    }
    return *this;
}

template<typename T> T & Array<T>::operator[]( unsigned int src )
{
    if (src < 0 || src >= _size)
        throw IndexException();
    return (array[src]);
}

// template<typename T> T Array<T>::operator[]( unsigned int src ) const
// {
//     if (src < 0 || src >= _size)
//         throw IndexException();
//     return (array[src]);
// }

template<typename T> unsigned int Array<T>::size(void) const
{
    unsigned int len;

    len = 0;
    for (unsigned int i = 0; i < _size ; i++)
        if (array[i])
            len++;
    return (len);
}

#endif