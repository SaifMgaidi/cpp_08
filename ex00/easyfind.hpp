#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T& arr, int val)
{
	return (std::find(arr.begin(), arr.end(), val));
}

template<typename T>
typename T::const_iterator	easyfind(const T& arr, int val)
{
	return (std::find(arr.begin(), arr.end(), val));
}

#endif