/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:04:17 by marvin            #+#    #+#             */
/*   Updated: 2025/11/29 13:04:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0){}
Span::Span(unsigned int n) : _N(n){}
Span::Span(const Span &other) : _N(other._N), _arr(other._arr){}
Span::Span &operator=(const Span &other)
{
	if (this != &other)
	{
		_N = other.getSize();
		_arr = other.getArr();
	}
	return *this;	
}
Span::~Span(){}
unsigned int Span::getSize() const
{
	return (_N);
}
std::vector<int> &Span::getArr() const
{
	return (_arr);
}
void Span::addNumber(int n)
{
	if (_arr.size() >= getSize())
		throw Span::ContainerFullExeception();
	_arr.push_back(n);
}
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_arr.size() + (end - begin) > getSize())
		throw Span::ContainerFullExeception();
	while (begin != end)
	{
		_arr.push_back(*begin);
		begin++;
	}
	//_arr.insert(arr.end(), begin, end); also works
}
unsigned int Span::shortestSpan() const
{
	if (_arr.size() < 2)
		throw Span::SizeTooSmallExeception();
	std::vector<int> tmp = getArr();
	std::sort(tmp.begin(), tmp.end());
	unsigned int result = tmp[1] - tmp[0];
	for (int i = 2; i < tmp.size(); i++)
	{
		unsigned int value = tmp[i] - tmp[i - 1];
		if (value < result)
			result = value;
	}
	return (result);
}
unsigned int Span::longestSpan() const
{
	if (_arr.size() < 2)
		throw Span::SizeTooSmallExeception();
	std::vector<int> tmp = getArr();
	std::sort(tmp.begin(), tmp.end());
	return (tmp.at(tmp.size() - 1) - tmp.at(0));
}

const char* Span::ContainerFullExeception::what() const throw()
{
	return ("Array is Full!!");
}

const char* Span::SizeTooSmallExeception::what() const throw()
{
	return ("Array is too small to compare!!");
}