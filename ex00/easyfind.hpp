/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:24:55 by marvin            #+#    #+#             */
/*   Updated: 2025/11/27 12:24:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>

class InstanceNotFound: public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Instance not found");
		}
};

template <typename T>
typename T::iterator easyfind(T &arr, int i)
{
    typename T::iterator it = std::find(arr.begin(), arr.end(), i);

    if (it == arr.end())
        throw InstanceNotFound();
    return it;
}

#endif

