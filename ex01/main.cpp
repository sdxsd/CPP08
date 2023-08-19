#include <cstdint>
#include <iostream>
#include <random>
#include "Span.hpp"

void fillSpan(Span &span, unsigned int numCount, unsigned int numLimit) {
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> distribution(INT32_MIN, INT32_MAX);
	std::vector<int> numVec;

	if (numCount > numLimit)
		return;
	for (int i = 0; i <= numCount; i++)
		numVec.push_back(distribution(rng));
	span.addMultipleNumbers(numVec.begin(), numVec.end());
}

int main(void) {
	Span sp = Span(5);
	std::vector<int> x = {1, 5, 65, 93, 21, 20, 28};
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addMultipleNumbers(x.begin(), x.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
