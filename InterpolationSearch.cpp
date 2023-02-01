#include "InterpolationSearch.h"

using namespace Algorithms;

template<typename T, class Container>
static int Algorithms::interpolationSearch(T value, Container & input) {
    int first = 0;
    int last = input.size() - 1;
    int estimate;

    while (input.at(first) < value && input.at(last) >= value) {
        // Calculate where value likely is
        estimate = first + ((value - input.at(first)) * (last - first)) / (input.at(last) - input.at(first));
        if (input.at(estimate) < value) first = estimate + 1;
        else if (input.at(estimate) > value) last = estimate - 1;
        else return estimate;
    }
    if (input.at(first) == value) return first;
    return -1;  // Not found
}
