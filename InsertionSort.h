#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

namespace Algorithms
{
    /**
     * @brief   Sort the container in non-descending order using an insertion sort algorithm.
     *          The algorithm is stable.
     * 
     * @tparam  Container the container type, must provide functions `size()` and `at()`
     * @param   container container to sort, will be modified directly
     * @pre     container data is modifiable && container data is comparable
     * @post    container data is sorted in a non-descending order
     */
    template<class Container>
    void insertionSort(Container & container);
}

#endif // !INSERTIONSORT_H
