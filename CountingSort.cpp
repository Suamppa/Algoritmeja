#include "CountingSort.h"

using namespace Algorithms;

template<class Container>
void Algorithms::countingSort(Container & container, Container & result, int maxValue) {
    int freq[maxValue+1] = {}; // Frequency vector initialized with zeroes
    for (int x : container) ++freq[x]; // Increment the frequencies of values
    for (int i = 1; i <= maxValue; ++i) freq[i] += freq[i-1]; // Cumulate
    // Fill result
}
