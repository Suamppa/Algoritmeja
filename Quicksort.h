#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Algorithms.h"

namespace Algorithms
{
    /**
     * @brief   Sort the container in non-descending order using a quicksort algorithm.
     *          The algorithm implementation is not stable.
     * 
     * @tparam  Container the container type
     * @param   container container to sort, will be modified directly
     * @param   start starting index
     * @param   end last index
     * @param   pivot optional; the index to use as pivot, defaults to end
     * @pre     container data is modifiable && container data is comparable
     * @post    container data is sorted in a non-descending order
     */
    template<class Container>
    void quicksort(Container & container, int start, int end, int pivot=-1);
}

#endif // !QUICKSORT_H
