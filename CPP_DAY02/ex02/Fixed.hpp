/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <mmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:10:40 by mmoumni           #+#    #+#             */
/*   Updated: 2022/11/01 11:54:36 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();
		Fixed &		operator=( Fixed const & rhs );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        Fixed( const int number);
        Fixed( const float number);
        bool    operator> (const Fixed & rhs);
        bool    operator< (const Fixed & rhs);
        bool    operator>= (const Fixed & rhs);
        bool    operator<= (const Fixed & rhs);
        bool    operator==(const Fixed & rhs);
        bool    operator!=(const Fixed & rhs);
        Fixed   operator+(const Fixed & rhs);
        Fixed   operator-(const Fixed & rhs);
        Fixed   operator*(const Fixed & rhs);
        Fixed   operator/(const Fixed & rhs);
        Fixed   operator++(void);
        Fixed   operator++(int);
        Fixed   operator--(void);
        Fixed   operator--(int);
        static  Fixed &min(Fixed & num1, Fixed & num2);
        static  Fixed &min(const Fixed & num1, const Fixed & num2);
        static  Fixed &max(Fixed & num1, Fixed & num2);
        static  Fixed &max(const Fixed & num1, const Fixed & num2);
	private:
		int fixed_point;
		static const int fraction = 8;
        
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */