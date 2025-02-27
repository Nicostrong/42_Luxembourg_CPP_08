/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:52:20 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/27 11:17:41 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template < typename T >
class MutantStack:	public std::stack<T>
{

	public:

		typedef typename std::deque<T>::iterator				iterator;
		typedef typename std::deque<T>::const_iterator			const_iterator;
		typedef typename std::deque<T>::reverse_iterator		reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator	const_reverse_iterator;

		MutantStack( void ) : std::stack<T>() {}
		MutantStack( const MutantStack &src_object ) : std::stack<T>( src_object ) {}
		MutantStack		&operator=( const MutantStack &src_object )
		{
			if (this != &src_object)
			{
				std::stack<T>::operator=(src_object);
			}
			return (*this);
		}
    	~MutantStack( void ) {}

		iterator				begin( void );
		const_iterator			begin( void ) const;
		reverse_iterator		rbegin( void );
		const_reverse_iterator	rbegin( void ) const;

		iterator				end( void );
		const_iterator			end( void ) const;
		reverse_iterator		rend( void );
		const_reverse_iterator	rend( void ) const;

};

# include "MutantStack.tpp"

#endif