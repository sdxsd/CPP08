#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span(unsigned int n) {
	maxInteger = n;
}

Span::Span(const Span& toCopy) {
	maxInteger = toCopy.maxInteger;
	std::vector<int>::const_iterator iter = toCopy.intList.begin();
	for (; iter < toCopy.intList.end(); iter++)
		intList.push_back(*iter);
}

Span::~Span(void) {
	intList.clear();
}

Span& Span::operator=(const Span& toCopy) {
	if (this != &toCopy) {
		std::vector<int>::const_iterator iter = toCopy.intList.begin();
		intList.clear();
		maxInteger = toCopy.maxInteger;
		for (; iter < toCopy.intList.end(); iter++)
			intList.push_back(*iter);
	}
	return (*this);
}

unsigned int Span::shortestSpan(void) {
	if (intList.size() < 2)
		throw std::invalid_argument("No integers in list to find span between.");
	return(std::abs(std::min_element(intList.begin(), intList.end()) - std::max_element(intList.begin(), intList.end())));
}

unsigned int Span::longestSpan(void) {
	if (intList.size() < 2)
		throw std::invalid_argument("No integers in list to find span between.");
	std::vector<int> sorted = intList;
	std::sort(sorted.begin(), sorted.end());
	return (sorted.back() - sorted.front());
}

void Span::addNumber(int n) {
	if (intList.size() >= maxInteger)
		throw std::invalid_argument("Span is full.");
	intList.push_back(n);
}
