#include "Span.hpp"
#include <limits>

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
	std::vector<int>sortedIntList = intList;
	std::sort(sortedIntList.begin(), sortedIntList.end());
	unsigned int shortest = std::numeric_limits<int>::max();
	for (unsigned int i = 1; i < sortedIntList.size(); i++) {
		int span = sortedIntList[i] - sortedIntList[i - 1];
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
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

void Span::displayNumbers(void) {
	for (unsigned int i = 0; i < intList.size(); i++)
		std::cout << intList[i] << std::endl;
}

unsigned int Span::spanSize(void) {
	return (intList.size());
}

unsigned int Span::spanCapacity(void) {
	return (maxInteger - intList.size());
}
