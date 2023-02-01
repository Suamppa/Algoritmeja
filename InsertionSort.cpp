#include "InsertionSort.h"

using namespace Algorithms;

template<class Container>
void Algorithms::insertionSort(Container & container) {
    int size = container.size();
    for (int j = 1; j < size; ++j) {
        auto temp = container.at(j);
        int i = j - 1;
        while (i >= 0 && container.at(i) > temp) {
            container.at(i + 1) = container.at(i);
            --i;
        }
        container.at(i + 1) = temp;
    }
}
