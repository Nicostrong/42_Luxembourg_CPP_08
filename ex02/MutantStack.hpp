/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:52:20 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/26 11:46:26 by nfordoxc         ###   Luxembourg.lu     */
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

		typedef typename std::deque<T>::iterator		iterator;
    	typedef typename std::deque<T>::const_iterator	const_iterator;

		iterator		begin( void );
		const_iterator	begin( void ) const;
		iterator		end( void );
		const_iterator	end( void ) const;

};

# include "MutantStack.tpp"

#endif