#include "CountingSort.h"

using namespace Algorithms;

template<class Container>
void Algorithms::countingSort(Container & container, Container & result, int maxValue) {
    int size = 0;
    int freq[maxValue+1] = {}; // Frequency array initialized with zeros

    for (int x : container) {
        ++freq[x];  // Increment the frequencies of each element x in container
        ++size;     // Also determine the size of container in the process
    }

    // Make frequencies cumulative,
    // i.e. each element freq[i] tells how many elements in container are <= i
    for (int i = 1; i <= maxValue; ++i) freq[i] += freq[i-1];

    // Fill result starting from the end of container
    for (int j = size-1; j >= 0; --j) {
        // freq[container[j]] tells how many elements in container are <= container[j]
        result[freq[container[j]]-1] = container[j]; // Place container[j] in its correct position
        --freq[container[j]]; // Reduce the relevant cumulative frequency by one
    }
}
