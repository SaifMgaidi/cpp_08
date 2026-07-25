#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	v;
	int					val			= 20;
	int					error_val	= 200;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	std::cout << "array: ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;


	std::cout << "\n===================== Case valid =============================" << std::endl;
	std::vector<int>::iterator	it = easyfind(v, val);

	if (it != v.end())
		std::cout << "find: " << *it << std::endl;
	else
		std::cout << val << " not found" << std::endl;
	
	std::cout << "\n===================== Case invalid =============================" << std::endl;
	it = easyfind(v, error_val);
	if (it != v.end())
		std::cout << "find: " << *it << std::endl;
	else
		std::cout << error_val << " not found" << std::endl;


	std::cout << "\n===================== Case const =============================" << std::endl;
	const std::vector<int>	v2(v);
	const std::vector<int>::const_iterator	it_2 = easyfind(v2, val);

	if (it_2 != v2.end())
		std::cout << "find: " << *it_2 << std::endl;
	else
		std::cout << val << " not found" << std::endl;
	return (0);
}