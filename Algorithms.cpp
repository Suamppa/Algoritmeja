#include "Algorithms.h"

using namespace Algorithms;

template<class Container>
void Algorithms::swap(Container & container, int index1, int index2) {
    auto temp = container.at(index1);
    container.at(index1) = container.at(index2);
    container.at(index2) = temp;
}

int Algorithms::intMax() {
    int i = 0;
    i = ~i;
    i = (unsigned int) i >> 1;
    return i;
}
