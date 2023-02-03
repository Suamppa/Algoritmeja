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
     * @tparam  Container the container type, must provide the function `at()`
     * @param   container container to access, will be modified directly
     * @param   index1 the index of the element to swap with
     * @param   index2 the index of the other element to swap with
     */
    template<class Container>
    void swap(Container & container, int index1, int index2);
}

#endif // !ALGORITHMS_H
