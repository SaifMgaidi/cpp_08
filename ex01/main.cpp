#include "Span.hpp"

int	main(void)
{
	Span	s(10);
	Span	s2(10);
	Span	s3(1);
	Span	tmp(20000);
	Span	s4;

	std::vector<int>	vals;

	vals.push_back(10);
	vals.push_back(20);
	vals.push_back(30);
	vals.push_back(40);
	vals.push_back(50);

	std::cout << "============= simple case ===========================" << std::endl;
	try
	{
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(3);
		std::cout << "shortest min: " << s.shortestSpan() << std::endl;
		std::cout << "longest max: " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	std::cout << "\n============= insert case ===========================" << std::endl;
	try
	{
		s2.addNumbers(vals.begin(), vals.end());
		std::cout << "shortest min: " << s2.shortestSpan() << std::endl;
		std::cout << "longest max: " << s2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	std::cout << "\n============= one element case ===========================" << std::endl;
	try
	{
		s3.addNumber(5);
		std::cout << s3.shortestSpan() << std::endl;;
		std::cout << s3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	std::cout << "\n============= 20 000 element case ===========================" << std::endl;
	try
	{
		for (int i = 0; i < 20000; ++i)
			tmp.addNumber(i + 1);
		std::cout << "shortest min: " << tmp.shortestSpan() << std::endl;;
		std::cout << "longest max: " << tmp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	std::cout << "\n============= empty element case ===========================" << std::endl;
	try
	{
		s4.addNumber(5);
		std::cout << "shortest min: " << s4.shortestSpan() << std::endl;
		std::cout << "longest max: " << s4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	


	std::cout << "\n============= subject main test ===========================" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std:: endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}