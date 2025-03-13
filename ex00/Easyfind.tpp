/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:44:38 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/13 16:12:56 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

# include "Easyfind.hpp"

template < typename T >
typename T::iterator	easyfind( T &container, int value )
{
	typename T::iterator	it;
	
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NotFound();
	return (it);
}

template < typename T >
typename T::const_iterator	easyfind( const T &container, int value )
{
	return (easyfind<T>(const_cast<T &>(container), value));
}
