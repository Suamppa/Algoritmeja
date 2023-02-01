#include "Algorithms.h"

namespace Algorithms {
    template<class Container>
    void swap(Container & container, int index1, int index2) {
        auto temp = container.at(index1);
        container.at(index1) = container.at(index2);
        container.at(index2) = temp;
    }
}
