/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:07:30 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/26 00:14:54 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <class Type>
class MutantStack: public std::stack<Type>
{
    public:
        MutantStack();
        MutantStack(const MutantStack & src);
        ~MutantStack();
        MutantStack & operator=(const MutantStack & rhs);
        typedef typename std::stack<Type>::container_type::iterator iterator;
        iterator    begin(void);
        iterator    end(void);
};

template<class Type>MutantStack<Type>::MutantStack()
{
    
}

template<class Type>MutantStack<Type>::MutantStack( MutantStack<Type> const & src)
{
    *this = src;
}

template<class Type> MutantStack<Type>::~MutantStack()
{
    
}

template<class Type> MutantStack<Type> & MutantStack<Type>::operator=(MutantStack<Type> const & rhs)
{
    if (this != &rhs)
    {
        
    }
    return *this;
}

template<class Type> typename MutantStack<Type>::iterator MutantStack<Type>::begin(void)
{
    return this->c.begin();
}

template<class Type> typename MutantStack<Type>::iterator MutantStack<Type>::end(void)
{
    return this->c.end();
}
     
#endif
