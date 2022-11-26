/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:07:30 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/26 11:13:33 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <vector>
#include <list>

template <class Type, class Container = std::deque<Type> >
class MutantStack: public std::stack<Type, Container>
{
    public:
        MutantStack() {};
        MutantStack & operator=( MutantStack<Type, Container> const& rhs)
        {
            if (this != &rhs)
            {
                std::move(rhs.c);   
            }
            return *this;
        }
        MutantStack(MutantStack <Type, Container> const & src)
        {
            this = src;
        }
        ~MutantStack(){};
        typedef typename Container::iterator iterator;
        iterator    begin(void)
        {
            return this->c.begin();
        }
        iterator    rbegin(void)
        {
            return this->c.rbegin();
        }
        iterator    end(void)
        {
            return this->c.end();
        }
        iterator    rend(void)
        {
            return this->c.rend();
        }
};

#endif
