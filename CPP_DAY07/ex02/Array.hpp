/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:10:09 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/24 16:37:06 by mmoumni          ###   ########.fr       */
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
        Array();
        Array(unsigned int n);
        Array( Array<T> const & src);
        ~Array();
        Array & operator=(Array<T> const & rhs);
        T & operator[]( unsigned int rhs);
        const T & operator[]( unsigned int rhs) const;
        unsigned int    size(void) const;
        unsigned int    get_len(void) const;
    private:
        T   *array;
        unsigned int _size;
};

template<typename T> Array<T>::Array()
{
    array = NULL;
    _size = 0;
}

template<typename T> Array<T>::~Array()
{
    delete [] array;    
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

template<typename T> Array<T>::Array( Array<T> const & src )
{
    if (src._size == 0)
	{
		_size = 0;
		array = NULL;
		return ;
	}
	this->array = new T[src._size];
	_size = src._size;
	unsigned int i = 0;
	while (this->_size > i && i < src._size)
	{
		this->array[i] = src.array[i];
		i++;
	}
}

template<typename T> unsigned int Array<T>::get_len( void ) const
{
    return (_size);
}

template<typename T> Array<T> & Array<T>::operator=( Array<T> const & rhs )
{
    unsigned int i = 0;
    
    if (rhs._size == 0)
	{
		delete [] array;
		_size = 0;
		array = NULL;
		return (*this);
	}
	delete[] this->array;
	this->array = new T[rhs._size];
	_size = rhs._size;
	while (i < rhs._size)
	{
		this->array[i] = rhs.array[i];
		i++;
	}
    return *this;
}

template<typename T> T & Array<T>::operator[]( unsigned int src )
{
    if (src >= _size)
        throw std::out_of_range("out of bounds");
    return (array[src]);
}

template<typename T> const T & Array<T>::operator[]( unsigned int src ) const
{
    if (src >= _size)
        throw std::out_of_range("out of bounds");
    return (array[src]);
}

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