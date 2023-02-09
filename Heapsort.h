#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "Algorithms.h"

namespace Algorithms
{
    /**
     * @brief   Sort data in a heap structure
     * 
     * @tparam  Container heap structure's underlying container type
     * @param   heap data to sort
     */
    template<class Container>
    void heapsort(Heap<Container> & heap);
}

#endif // !HEAPSORT_H
