/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:52:29 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/26 11:53:27 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

iterator		begin( void )
{
	return (this->c.begin())
}

const_iterator	begin( void ) const
{
	return (this->c.begin());
}

iterator		end( void )
{
	return (this->c.end());
}

const_iterator	end( void ) const
{
	return (this->c.end());
}