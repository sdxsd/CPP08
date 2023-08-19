#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <iostream>

class Span {
	private:
		unsigned int		maxInteger;
		std::vector<int>	intList;
	public:
		Span(unsigned int n);
		Span(const Span& toCopy);
		~Span(void);
		Span& operator=(const Span& toCopy);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		void addNumber(int n);
		void displayNumbers(void);
		unsigned int spanSize(void);
		unsigned int spanCapacity(void);
		template <typename Iter> void addMultipleNumbers(Iter begin, Iter end) {
			intList.insert(intList.end(), begin, end);
		}
};

#endif // SPAN_H
