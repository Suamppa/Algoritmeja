#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Algorithms.h"

namespace Algorithms
{
    template<class Container>
    void quicksort(Container & container, int start, int end, int pivot=-1);
}

#endif // !QUICKSORT_H
