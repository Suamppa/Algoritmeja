#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
// #define USE_ITERS 1

#include <iterator>
#include <vector>

namespace Algorithms
{
    class BinarySearch
    {
    public:
        /**
         * @brief   Find the index of the requested value in a sorted vector of integers input.
         *          Sorting to be added after getting to sorting algorithms.
         * 
         * @pre     input content is of type int and sorted in a non-decreasing order
         * @post    return is of type int signifying the index of value or -1 if not found
         *          && input is unchanged
         * @return  int: Index of value in input or -1 if not found
         */
        static int binarySearch(int value, std::vector<int> & input);
    };
}

#endif
