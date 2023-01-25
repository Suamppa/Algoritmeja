#include "BinarySearch.h"

namespace Algorithms
{
    #if USE_ITERS
    // An implementation with iterators
    int BinarySearch::binarySearch(int value, std::vector<int> & input) {
        int size;
        std::vector<int>::const_iterator begin = input.cbegin();
        std::vector<int>::const_iterator end = input.cend();
        std::vector<int>::const_iterator mid;

        while (begin <= end) {
            size = std::distance(begin, end);
            mid = begin + (size / 2);
            if (*mid < value) begin = mid + 1;
            else if (*mid > value) end = mid - 1;
            else return *mid;
        }
        return -1;  // Not found
    }

    #else
    // A more conventional implementation
    int BinarySearch::binarySearch(int value, std::vector<int> & input) {
        int begin = 0;
        int end = input.size() - 1;
        int mid, x;

        while (begin <= end) {
            mid = (begin + end) / 2;
            x = input.at(mid);
            if (x < value) begin = mid + 1;
            else if (x > value) end = mid - 1;
            else return x;
        }
        return -1;  // Not found
    }
    #endif
}
