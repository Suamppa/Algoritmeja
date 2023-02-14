#include "Quicksort.h"

using namespace Algorithms;

template<class Container>
void Algorithms::quicksort(Container & container, int start, int end) {
    if (start < end) {
        int cut = partition(container, start, end);
        quicksort(container, start, cut-1);
        quicksort(container, cut+1, end);
    }
}
