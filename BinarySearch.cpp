#include "BinarySearch.h"

namespace Algorithms
{
    #if USE_ITERS
    // An implementation with iterators, a bit of a relic
    template<typename T, class Container>
    int binarySearch(T value, Container & input) {
        int size;
        auto begin = input.cbegin();
        auto end = input.cend();
        auto mid = begin;

        while (begin <= end) {
            size = std::distance(begin, end);   // inefficiency
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
    int binarySearch(T value, Container & input) {
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

    /*
    #if !DETACH
    template<typename T, typename RandomAccessIterator>
    int binarySearch(T value, RandomAccessIterator first, RandomAccessIterator last, int size) {
        // auto start = first;
        auto checker = first;
        int mid;

        while (*first <= *last) {
            mid = (size - 1) / 2;   // Middle index
            checker = first + mid;  // Iterator to check the value in the middle
            if (*checker < value) first += mid + 1;
            else if (*checker > value) last -= mid - 1;
            else return mid;  // Value found
            size = size / 2;
        }        
        return -1;  // Not found
    }
    #endif
     */
}
