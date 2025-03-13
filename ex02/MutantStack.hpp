/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:52:20 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/13 17:36:21 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template < typename T, typename Container = std::deque<T> >
class MutantStack:	public std::stack<T, Container>
{

	public:

		typedef typename Container::iterator				iterator;
		typedef typename Container::const_iterator			const_iterator;
		typedef typename Container::reverse_iterator		reverse_iterator;
		typedef typename Container::const_reverse_iterator	const_reverse_iterator;

		MutantStack( void ) : std::stack<T, Container>() {}
		MutantStack( const MutantStack &src_object ) : std::stack<T, Container>( src_object ) {}
		MutantStack		&operator=( const MutantStack &src_object )
		{
			if (this != &src_object)
			{
				std::stack<T, Container>::operator=(src_object);
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