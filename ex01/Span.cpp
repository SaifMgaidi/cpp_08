#include "Span.hpp"

Span::Span()
:   capacity_(0)
{
}

Span::Span(const Span& other)
:   capacity_(other.capacity_)
{
	numbers_ = other.numbers_;
}

Span::Span(unsigned int n)
:   capacity_(n)
{
}

Span&   Span::operator=(const Span& other)
{
	if (this != &other)
	{
		capacity_ = other.capacity_;
		numbers_ = other.numbers_;
	}
	return (*this);
}

Span::~Span()
{
}


void    Span::addNumber(int n)
{
	if (numbers_.size() >= capacity_)
		throw std::length_error("Maximum number of elements exceeded");
	numbers_.push_back(n);
}

int    Span::shortestSpan() const
{
	int    				min = 0;
	std::vector<int>	copy = numbers_;

	if (copy.size() < 2)
		throw std::length_error("Number of elements not enough");

	std::sort(copy.begin(), copy.end());
	min = std::numeric_limits<int>::max();

	for (std::vector<int>::const_iterator it = copy.begin(); it != copy.end(); ++it)
	{
		if ((it + 1) != copy.end() && *(it + 1) - *it < static_cast<int>(min))
			min = *(it + 1) - *it;
	}

	return (min);
}

int    Span::longestSpan() const
{
	int    min = 0;
	int    max = 0;

	if (numbers_.size() < 2)
		throw std::length_error("Number of elements not enough");

	min = *std::min_element(numbers_.begin(), numbers_.end());
	max = *std::max_element(numbers_.begin(), numbers_.end());

	return (max - min);
}
