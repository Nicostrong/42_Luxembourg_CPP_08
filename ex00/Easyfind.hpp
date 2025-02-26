/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:44:22 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/26 10:29:16 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <exception>
# include <string>

# define RESET		"\033[0m"
# define RED		"\033[31m"

class NotFound : public std::exception
{
	public:

		virtual const char *what() const throw()
		{
			return (RED"Exception: Value not found."RESET);
		}

};

template < typename T>
typename T::iterator	easyfind( T &container, int value );

template < typename T>
typename T::const_iterator	easyfind( const T &container, int value );

# include "Easyfind.tpp"

#endif
