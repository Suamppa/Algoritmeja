#ifndef MERGESORT_H
#define MERGESORT_H

namespace Algorithms
{
    /**
     * @brief   Sort the container in non-descending order using a merge sort algorithm.
     *          The algorithm is stable.
     * 
     * @tparam  Container the container type
     * @param   container container to sort, will be modified directly
     * @pre     container data is modifiable && container data is comparable
     * @post    container data is sorted in a non-descending order
     */
    template<class Container>
    void mergeSort(Container & container, int start, int end);

    inline namespace Helper {
        /**
         * @brief   Helper function for mergeSort.
         * 
         * @tparam  Container the container type, must provide functions `size()` and `at()`
         * @param   container 
         */
        template<class Container>
        void merge(Container & container, int start, int split, int end);
    }
}

#endif // !MERGESORT_H
