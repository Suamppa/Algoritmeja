#include "LinearSearch.h"

using namespace Algorithms;

template<typename T, class Container>
int Algorithms::sortedLinearSearch(T value, Container & input) {
    int inputLength = input.size();
    for (int i = 0; i < inputLength; ++i) {
        T x = input.at(i);
        if (x == value) return i;
        if (x > value) return -1;   // Not found
    }
    return -1;  // Not found
}

template<typename T, typename InputIterator>
int Algorithms::sortedLinearSearch(T value, InputIterator first, InputIterator last) {
    int index = 0;
    while (first != last) {
        if (*first == value) return index;
        if (*first > value) return -1;  // Not found
        ++index;
        ++first;
    }
    return -1;  // Not found
}

template<typename T, class Container>
int Algorithms::unsortedLinearSearch(T value, Container & input) {
    int inputLength = input.size();
    for (int i = 0; i < inputLength; ++i) {
        if (input.at(i) == value) return i;
    }
    return -1;  // Not found
}

template<typename T, typename InputIterator>
int Algorithms::unsortedLinearSearch(T value, InputIterator first, InputIterator last) {
    int index = 0;
    while (first != last) {
        if (*first == value) return index;
        ++index;
        ++first;
    }
    return -1;  // Not found
}
