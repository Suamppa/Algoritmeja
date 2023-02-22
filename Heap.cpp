#include "Heap.h"

using namespace Algorithms;

template<class Container>
Algorithms::Heap<Container>::Heap(Container & container, int first, int last) :
    container(container), start(first), end(last)
{
    length = end - start + 1;
    inHeap = length;
}

template<class Container>
int Algorithms::Heap<Container>::size() { return length; }

template<class Container>
int Algorithms::Heap<Container>::parent(int i) {
    if (i <= 0) return 0;
    return (i - 1) / 2;
}

template<class Container>
int Algorithms::Heap<Container>::left(int i) { return 2 * i + 1; }

template<class Container>
int Algorithms::Heap<Container>::right(int i) { return 2 * i + 2; }

template<class Container>
bool Algorithms::Heap<Container>::isInHeap(int i) {
    if (i <= start || i >= start + inHeap) return false;
    return true;
}

template<class Container>
void Algorithms::Heap<Container>::buildMaxHeap() {
    inHeap = length;
    for (int i = start + (length-1)/2; i >= start; --i) fixMaxHeap(i);
}

template<class Container>
void Algorithms::Heap<Container>::fixMaxHeap(int i) {
    int left = this->left(i);
    int right = this->right(i);
    int max = i;
    if (isInHeap(left) && container[left] > container[max]) max = left;
    if (isInHeap(right) && container[right] > container[max]) max = right;
    if (max != i) {
        swap(container, i, max);
        fixMaxHeap(max);
    }
}

template<class Container>
Container & Algorithms::Heap<Container>::getContainer() { return container; }

template<class Container>
int Algorithms::Heap<Container>::inHeapCount() { return inHeap; }

template<class Container>
void Algorithms::Heap<Container>::setInHeapCount(int num) { inHeap = num; }

template<class Container>
int Algorithms::Heap<Container>::getStart() { return start; }

template<class Container>
int Algorithms::Heap<Container>::getEnd() { return end; }

template<class Container>
auto & Algorithms::Heap<Container>::operator[](int i) { return container[i]; }
