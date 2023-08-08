#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <stdexcept>

template <typename T> typename T::const_iterator easyfind(const T& container, const int toFind) {
	typename T::const_iterator iter;
	iter = std::find(container.begin(), container.end(), toFind);
	if (iter == container.end())
		throw std::invalid_argument("Unable to find argument within container.");
	return (iter);
}

#endif // EASYFIND_H
