#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "Algorithms.h"

namespace Algorithms
{
    /**
     * @brief   Sort the container in non-descending order using a selection sort algorithm.
     *          The algorithm is not stable.
     * 
     * @tparam  Container the container type, must provide functions `size()` and `at()`
     * @param   container container to sort, will be modified directly
     * @pre     container data is modifiable && container data is comparable
     * @post    container data is sorted in a non-descending order
     */
    template<class Container>
    void selectionSort(Container & container);
}

#endif // !SELECTIONSORT_H
