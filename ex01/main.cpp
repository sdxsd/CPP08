#include <iostream>
#include "Span.hpp"

int main(void) {
  Span sp = Span(5);
  std::vector<int>x = { 1,5,65,93,21,20,28 };
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
