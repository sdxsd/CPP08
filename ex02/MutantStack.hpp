#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>

// Note:
// I dislike C++ when it is like this. So much verbosity for what seems like very little benefit.

template <typename T> class MutantStack : public std::stack<T> {
	public:
		MutantStack(void) { return ; }
		MutantStack(const MutantStack& toCopy) {
			*this = toCopy;
		}
		~MutantStack(void) { return ; }
		MutantStack& operator=(const MutantStack<T>& toCopy) {
			if (*this != toCopy)
				(std::stack<T>)*this = (std::stack<T>)toCopy;
			return (*this);
		}

		// Typename required to ensure that the compiler knows that
		// std::stack<T>::container_type::iterator is a type and not a
		// static member or some other strange C++ almagamation.
		typename std::stack<T>::container_type::iterator begin(void) {
			return (this->c.begin());
		}
		typename std::stack<T>::container_type::iterator end(void) {
			return (this->c.end());
		}
		// Const iterators.
		typename std::stack<T>::container_type::const_iterator begin(void) const {
			return (this->c.begin());
		}
		typename std::stack<T>::container_type::const_iterator end(void) const {
			return (this->c.end());
		}
		// Reverse iterators.
		typename std::stack<T>::container_type::reverse_iterator rbegin(void) {
			return (this->c.rbegin());
		}
		typename std::stack<T>::container_type::reverse_iterator rend(void) {
			return (this->c.rend());
		}
		// Constant reverse iterators.
		typename std::stack<T>::container_type::const_reverse_iterator rbegin(void) const {
			return (this->c.rbegin());
		}
		typename std::stack<T>::container_type::const_reverse_iterator rend(void) const {
			return (this->c.rend());
		}
};

#endif // MUTANTSTACK_H
