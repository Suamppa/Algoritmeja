#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include "Algorithms.h"

namespace Algorithms
{
    /**
     * @brief   Sort the container in non-descending order using a counting sort algorithm.
     *          The algorithm is stable. Container data must be of type integer.
     * 
     * @tparam  Container the container type, must hold integer data
     * @param   container container to sort, will be modified directly
     * @param   result container to store the result into, accessible by a []-operator
     * @param   maxValue the maximum value found among container elements;
     *          sorting will work as long as maxValue >= the actual max
     * @pre     container and result data is modifiable && container and result data is of type int
     *          && result is a valid container with size at least equal to the input container
     *          && maxValue >= the maximum value among the elements of container
     * @post    result will contain the same data as container but sorted in a non-descending order
     *          && the relative order of equal elements is preserved
     *          && container is not modified
     */
    template<class Container>
    void countingSort(Container & container, Container & result, int maxValue);
}

#endif // !COUNTINGSORT_H
