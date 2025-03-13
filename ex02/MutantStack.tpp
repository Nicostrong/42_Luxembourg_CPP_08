/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:52:29 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/13 17:23:41 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template < typename T, typename Container >
typename MutantStack<T, Container>::iterator				MutantStack<T, Container>::begin( void )
{
	return (this->c.begin());
}

template < typename T, typename Container >
typename MutantStack<T, Container>::const_iterator			MutantStack<T, Container>::begin( void ) const
{
	return (this->c.begin());
}

template < typename T, typename Container >
typename MutantStack<T, Container>::iterator				MutantStack<T, Container>::end( void )
{
	return (this->c.end());
}

template < typename T, typename Container >
typename MutantStack<T, Container>::const_iterator			MutantStack<T, Container>::end( void ) const
{
	return (this->c.end());
}

template < typename T, typename Container >
typename MutantStack<T, Container>::reverse_iterator		MutantStack<T, Container>::rbegin( void )
{
	return (this->c.rbegin());
}

template < typename T, typename Container >
typename MutantStack<T, Container>::const_reverse_iterator	MutantStack<T, Container>::rbegin( void ) const
{
	return (this->c.rbegin());
}

template < typename T, typename Container >
typename MutantStack<T, Container>::reverse_iterator		MutantStack<T, Container>::rend( void )
{
	return (this->c.rend());
}

template < typename T, typename Container >
typename MutantStack<T, Container>::const_reverse_iterator	MutantStack<T, Container>::rend( void ) const
{
	return (this->c.rend());
}