#include "SelectionSort.h"

using namespace Algorithms;

template<class Container>
void Algorithms::selectionSort(Container & container) {
    int size = container.size();
    for (int i = 0; i < size - 1; ++i) {
        int minind = i;
        for (int j = i + 1; j < size; ++j) {
            if (container.at(j) < container.at(minind)) minind = j;
        }
        swap(container, i, minind);
    }
}
