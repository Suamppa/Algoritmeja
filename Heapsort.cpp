#include "Heapsort.h"

using namespace Algorithms;

template<class Container>
void Algorithms::heapsort(Heap<Container> & heap) {
    heap.buildMaxHeap();
    heap.inHeap = heap.length;
    for (int i = heap.start + heap.length; i > heap.start; --i) {
        swap(heap, 0, i);
        --heap.inHeap;
        heap.fixMaxHeap(0);
    }
    heap.inHeap = heap.length;
}
