/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:04:19 by marvin            #+#    #+#             */
/*   Updated: 2025/11/29 13:04:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdlib>
#include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		
		unsigned int getSize() const;
		std::vector<int> &getArr() const;
		
		void addNumber(unsigned int);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		class ContainerFullExeception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class SizeTooSmallExeception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		unsigned int _N;
		std::vector<int> _arr;
};