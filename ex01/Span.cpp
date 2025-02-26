/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:40:08 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/26 10:44:13 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default constructor
 */
Span::Span( void ) : _maxSize(0)
{
	return ;
}

/*
 *	Constructor with parameter
 */
Span::Span( size_t n ) : _maxSize(n)
{
	return ;
}

/*
 *	Copy constructor
 */
Span::Span( Span const & src_object )
{
	*this = src_object;
	return ;
}

/*
 *	Destructor
 */
Span::~Span( void )
{
	return ;
}

/*
 *	Assignment constructor
 */
Span		&Span::operator=( Span const &src_object )
{
	if (this != &src_object)
	{
		this->_maxSize = src_object._maxSize;
		this->_numbers = src_object._numbers;
	}
	return (*this);
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Add number to the vector
 */
void		Span::addNumber( int n )
{
	if (this->_numbers.size() < this->_maxSize)
		this->_numbers.push_back(n);
	else
		throw Span::FullSpanException();
	return ;
}

/*
 *	Add range of numbers to the vector
 */
void		Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end )
{
	if (this->_numbers.size() + std::distance(begin, end) <= this->_maxSize)
		this->_numbers.insert(this->_numbers.end(), begin, end);
	else
		throw Span::FullSpanException();
	return ;
}

/*
 *	Return the shortest span
 */
int			Span::shortestSpan( void )
{
	std::vector<int>	sorted;
	int					span;
	
	if (this->_numbers.size() < 2)
		throw Span::NoSpanException();

	sorted = this->_numbers;
	std::sort(sorted.begin(), sorted.end());
	span = sorted.at(1) - sorted.at(0);
	for (size_t i = 1; i < (sorted.size() - 1); i++)
	{
		if (sorted.at(i + 1) - sorted.at(i) < span)
			span = sorted.at(i + 1) - sorted.at(i);
	}
	return (span);
}

/*
 *	Return the longest span
 */
int			Span::longestSpan( void )
{
	int		minVal;
	int		maxVal;

	if (this->_numbers.size() < 2)
		throw Span::NoSpanException();
	
	minVal = *std::min_element(this->_numbers.begin(), this->_numbers.end());
	maxVal = *std::max_element(this->_numbers.begin(), this->_numbers.end());

	return (maxVal - minVal);
}

/*******************************************************************************
 *								EXCEPTION 									   *
 ******************************************************************************/

/*
 *	FullSpanException
 */
const char	*Span::FullSpanException::what() const throw()
{
	return (RED"Exception: Span is full . Can't add more numbers."RESET);
}

/*
 *	NoSpanException
 */
const char	*Span::NoSpanException::what() const throw()
{
	return (RED"Exception: Span has not enough element to calculate a span."RESET);
}