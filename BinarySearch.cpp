#include "BinarySearch.h"

namespace Algorithms
{
    #if USE_ITERS
    // An implementation with iterators, a bit of a relic
    template<typename T, class Container>
    int BinarySearch::binarySearch(T value, Container & input) {
        int size;
        auto begin = input.cbegin();
        auto end = input.cend();
        auto mid = begin;

        while (begin <= end) {
            size = std::distance(begin, end);
            mid = begin + (size / 2);
            if (*mid < value) begin = mid + 1;
            else if (*mid > value) end = mid - 1;
            else return std::distance(input.cbegin(), mid);
        }
        return -1;  // Not found
    }

    #else
    // A more conventional implementation
    template<typename T, class Container>
    int BinarySearch::binarySearch(T value, Container & input) {
        int begin = 0;
        int end = input.size() - 1;
        int mid;
        T x;

        while (begin <= end) {
            mid = (begin + end) / 2;
            x = input.at(mid);
            if (x < value) begin = mid + 1;
            else if (x > value) end = mid - 1;
            else return mid;    // Value found
        }
        return -1;  // Not found
    }
    #endif

    template<typename T, typename InputIterator>
    int BinarySearch::binarySearch(T value, InputIterator first, InputIterator last) {
        int size;
        auto mid = first;
        auto start = first;

        while (first != last) {
            size = std::distance(first, last);
            mid = first + (size / 2);
            if (*mid < value) first = mid + 1;
            else if (*mid > value) last = mid - 1;
            else return std::distance(start, mid);  // Value found
        }        
        return -1;  // Not found
    }
}
