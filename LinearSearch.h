#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include <vector>

namespace Algorithms
{
    class LinearSearch
    {
    // private:
    //     LinearSearch();
    public:
        // How to generalize (don't force container type)?

        /**
         * @brief Find the index of the requested value in a sorted vector of integers.
         * 
         * @pre Input vector is of type int and sorted
         * @return Index of value or -1 for error
         */
        static int sortedLinearSearch(int, std::vector<int> &);
        static int unsortedLinearSearch(int, std::vector<int> &);
    };
}

#endif
