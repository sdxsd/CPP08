#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void) {
	std::vector<int> x = { 1, 2, 3, 4, 5 };

	try {
		std::cout << *easyfind(x, 3) << std::endl;
		std::cout << *easyfind(x, 0) << std::endl;
	}
	catch (std::invalid_argument &ia) {
		std::cout << ia.what() << std::endl;
	}
}
