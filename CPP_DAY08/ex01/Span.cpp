/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:11:31 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/26 21:00:35 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <vector>

Span::Span()
{
    sp = std::vector<int> (0);
    N = 0;
    index = 0;
}

Span::~Span()
{
    
}

Span::Span(const Span & src)
{
    *this = src;
}

Span::Span(unsigned int n)
{
    sp = std::vector<int> (n);
    this->N = n;
    this->index = 0;
}

void    Span::addNumber( int n )
{
    if (N == index)
        throw std::runtime_error("Full Span");
    else
    {
        sp[index] = n;
        index++;
    }
}

Span    & Span::operator=(const Span & rhs)
{
    if (this != &rhs)
    {
        for (unsigned int i = 0; i < rhs.N; i++)
        {
            sp[i] = rhs.sp[i];
        }
        N = rhs.N;
        index = rhs.index;
    }
    return *this;
}

int Span::shortestSpan(void)
{
    int min = 1e9;

    if (sp.size() <= 1)
        throw std::runtime_error("Span Error");    
    std::sort(sp.begin(), sp.end());
    std::vector<int>::iterator it = sp.begin();
    while (it != sp.end() - 1)
    {
        if ((*(it + 1) - *it ) < min)
            min = (*(it + 1) - *it );
        it++;
    }   
    return (min);
}

int Span::longestSpan(void)
{
    if (sp.size() <= 1)
        throw std::runtime_error("Span Error");
    std::sort(sp.begin(), sp.end());
    std::vector<int>::iterator it = sp.begin();
    std::vector<int>::iterator it2 = sp.end() - 1;
    return (*it2 - *it);
}

void Span::fill_all(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    int count;

    count = end - start;
    if (count < 0)
        throw std::runtime_error("invalid range of Iterator");
    else
    {
        if (index == N)
            throw std::runtime_error("Full Span");
        else
        {
            std::vector<int>::iterator it = start;
            while (it != end && index < N)
            {
                sp[index] = *it;
                index++;
                it++;   
            }
        }
    }
}