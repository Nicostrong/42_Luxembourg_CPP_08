/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:40:22 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/25 18:25:18 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>

# define RESET		"\033[0m"
# define RED		"\033[31m"

class	Span
{

	private:

		size_t				_maxSize;
		std::vector<int>	_numbers;
	
	public:

		/*	Canonical form	*/
		Span( void );
		Span( size_t n );
		Span( Span const &src_object );
		~Span( void );

		Span	&operator=( Span const &src_object );

		/*	Method	*/
		void	addNumber( int n );
		void	addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
		int		shortestSpan( void );
		int		longestSpan( void );

		/*	Exception	*/
		class	FullSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class	NoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
