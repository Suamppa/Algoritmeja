#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "Algorithms.h"
#include "Heap.h"

namespace Algorithms
{
    /**
     * @brief   Sort data in a heap structure
     * 
     * @tparam  Container heap structure's underlying container type
     * @param   heap data to sort
     * @pre     heap data is modifiable && heap data is comparable
     *          && container is wrapped in a Heap class
     * @post    container data in heap is sorted in a non-descending order
     *          && heap is a max heap
     */
    template<class Container>
    void heapsort(Heap<Container> & heap);
}

#endif // !HEAPSORT_H
