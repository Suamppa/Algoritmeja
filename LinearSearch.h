#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include <vector>

namespace Algorithms
{
    class LinearSearch
    {
    public:
        // How to generalize (don't force container type)?

        /**
         * @brief   Find the index of the requested value in a sorted vector of integers input.
         *          Sorting to be added after getting to sorting algorithms.
         * 
         * @pre     input content is of type int and sorted in a non-decreasing order
         * @post    return is of type int signifying the index of value or -1 if not found
         *          && input is unchanged
         * @return  int: Index of value in input or -1 if not found
         */
        static int sortedLinearSearch(int value, std::vector<int> & input);
        /**
         * @brief   Find the index of the requested value in an unsorted vector of integers input.
         * 
         * @pre     input content is of type int
         * @post    return is of type int signifying the index of value or -1 if not found
         *          && input is unchanged
         * @return  int: Index of value in input vector or -1 if not found
         */
        static int unsortedLinearSearch(int value, std::vector<int> & input);
    };
}

#endif
