#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <algorithm>
#include <cmath>

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
		template <typename Iter> void addMultipleNumbers(Iter begin, Iter end) {
			intList.insert(intList.end(), begin, end);
		}
};

#endif // SPAN_H
