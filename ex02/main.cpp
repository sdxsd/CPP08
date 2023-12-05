#include <iostream>
#include "MutantStack.hpp"

int main(void) {
	MutantStack<int> mutation;
	mutation.push(1);
	mutation.push(2);
	mutation.push(4);

	const MutantStack<int> cmutation(mutation);
	MutantStack<int> zum = mutation;
	for (auto x = cmutation.begin(); x < cmutation.end(); x++) {
		std::cout << *x << std::endl;
	}
}
