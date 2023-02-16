#include "Heapsort.h"

using namespace Algorithms;

template<class Container>
void Algorithms::heapsort(Heap<Container> & heap) {
    heap.buildMaxHeap();
    heap.setInHeapCount(heap.size());
    for (int i = heap.getStart() + heap.getEnd(); i > heap.getStart(); --i) {
        swap(heap, 0, i);
        heap.setInHeapCount(heap.inHeapCount()-1);
        heap.fixMaxHeap(0);
    }
    heap.setInHeapCount(heap.size());
}
