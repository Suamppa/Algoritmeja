#include "MergeSort.h"

using namespace Algorithms;

template<class Container>
void Algorithms::mergeSort(Container & container, int start, int end) {
    if (start < end) {
        int middle = (start + end) / 2;
        mergeSort(container, start, middle);
        mergeSort(container, middle+1, end);
        Helper::merge(container, start, middle, end);
    }
}

template<class Container>
void Algorithms::Helper::merge(Container & container, int start, int split, int end) {
    int sizeA = split - start + 1;
    int sizeB = end - split;
    int iA = 0, iB = 0;
    auto x = container[start];  // Sample container data type
    typedef decltype(x) T;
    T A[sizeA+1];
    T B[sizeB+1];
    for (int j = start; j <= split; ++j) {
        A[iA] = container[j];
        ++iA;
    }
    for (int j = split+1; j <= end; ++j) {
        B[iB] = container[j];
        ++iB;
    }
    A[sizeA] = std::numeric_limits<T>::max();
    B[sizeB] = std::numeric_limits<T>::max();
    iA = 0;
    iB = 0;
    for (int j = start; j <= end; ++j) {
        if (A[iA] <= B[iB]) {
            container[j] = A[iA];
            ++iA;
        } else {
            container[j] = B[iB];
            ++iB;
        }
    }
}
