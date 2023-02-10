#ifndef MERGESORT_H
#define MERGESORT_H

#include "Algorithms.h"
#include <limits>

namespace Algorithms
{
    /**
     * @brief   Sort the container in non-descending order using a merge sort algorithm.
     *          The algorithm is stable. Container must hold arithmetic data type.
     * 
     * @tparam  Container the container type
     * @param   container container to sort, will be modified directly
     * @param   start starting index
     * @param   end last index
     * @pre     container data is modifiable && container data is comparable
     *          && container data is of arithmetic type
     * @post    container data is sorted in a non-descending order
     */
    template<class Container>
    void mergeSort(Container & container, int start, int end);

    inline namespace Helper {
        // Helper function for mergeSort.
        template<class Container>
        void merge(Container & container, int start, int split, int end);
    }
}

#endif // !MERGESORT_H
