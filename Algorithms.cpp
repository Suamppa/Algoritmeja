#include "Algorithms.h"

using namespace Algorithms;

template<class Container>
void Algorithms::swap(Container & container, int index1, int index2) {
    auto temp = container[index1];
    container[index1] = container[index2];
    container[index2] = temp;
}

template<class Container>
int Algorithms::partition(Container & container, int start, int end, int pivot) {
    if (pivot < 0 || pivot > end) pivot = end; // Pivot is the last element by default
    else swap(container, pivot, end);   // Move pivot to the end
    int left = start - 1;
    for (int right = start; right < pivot; ++right) {
        if (container[right] <= container[pivot]) {
            ++left;
            swap(container, left, right);
        }
    }
    swap(container, left+1, pivot);
    return left+1;  // Return the first index of the right partition
}
