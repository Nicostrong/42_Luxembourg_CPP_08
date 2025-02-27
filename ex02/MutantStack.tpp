/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:52:29 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/27 11:16:03 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template < typename T >
typename MutantStack<T>::iterator				MutantStack<T>::begin( void )
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::const_iterator			MutantStack<T>::begin( void ) const
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::iterator				MutantStack<T>::end( void )
{
	return (this->c.end());
}

template < typename T >
typename MutantStack<T>::const_iterator			MutantStack<T>::end( void ) const
{
	return (this->c.end());
}

template < typename T >
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rbegin( void )
{
	return (this->c.rbegin());
}

template < typename T >
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin( void ) const
{
	return (this->c.rbegin());
}

template < typename T >
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rend( void )
{
	return (this->c.rend());
}

template < typename T >
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend( void ) const
{
	return (this->c.rend());
}