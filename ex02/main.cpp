#include <iostream>
#include "MutantStack.hpp"

int main(void) {
	MutantStack<int> mutation;

	mutation.push(1);
	mutation.push(2);
	mutation.push(4);
	for (auto x = mutation.begin(); x < mutation.end(); x++) {
		std::cout << *x << std::endl;
	}
}
