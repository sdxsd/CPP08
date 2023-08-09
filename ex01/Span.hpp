#ifndef SPAN_H
#define SPAN_H

#include <vector>

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
};

#endif // SPAN_H
