#include "Span.hpp"

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
	;
}

unsigned int Span::shortestSpan(void) {
	;
}

unsigned int Span::longestSpan(void) {
	;
}

void Span::addNumber(int n) {
	;
}
