#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span
{
public:
	// Constructors
	Span();
	Span(const Span& other);
	Span(unsigned int n);
	
	// Operators
	Span&	operator=(const Span& other);
	
	// Destructor
	~Span();

	// Member functions
	void	addNumber(int n);
	int		shortestSpan() const;
	int		longestSpan() const;

	template<typename It>
	void	addNumbers(It first, It last)
	{
		if (std::distance(first, last) + numbers_.size() > capacity_)
			throw std::length_error("Maximum number of elements exceeded");
		numbers_.insert(numbers_.end(), first, last);
	}
private:
	unsigned int		capacity_;
	std::vector<int>	numbers_;
};


#endif