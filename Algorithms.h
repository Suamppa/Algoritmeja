/** Utilities for the Algorithms namespace */

#ifndef ALGORITHMS_H
#define ALGORITHMS_H

/**
 * Shared namespace for all the included algorithms
 */
namespace Algorithms {
    /**
     * @brief   Swaps the container's contents between the given indices.
     * 
     * @tparam  Container the container type
     * @param   container container to access, will be modified directly
     * @param   index1 the index of the element to swap with
     * @param   index2 the index of the other element to swap with
     * @pre     container data is modifiable
     * @post    data at indices index1 and index2 is swapped
     */
    template<class Container>
    void swap(Container & container, int index1, int index2);
    
    /**
     * @brief   Partition a container from start to end at index pivot so that
     *          values before pivot are at least the value at pivot and values
     *          after are greater.
     * 
     * @tparam  Container the container type
     * @param   container container whose contents to partition
     * @param   start start of the index range to partition
     * @param   end end of the index range to partition
     * @param   pivot optional; the index to use as pivot, defaults to end
     * @returns int, first index of the right partition
     * @pre     container data is modifiable && container data is comparable
     * @post    values before the value at pivot (default = end) are less than
     *          or equal to the value at pivot
     *          && values after the value at pivot are greater than the value
     *          at pivot
     */
    template<class Container>
    int partition(Container & container, int start, int end, int pivot=-1);

    inline namespace Helper {}
}

#endif // !ALGORITHMS_H
