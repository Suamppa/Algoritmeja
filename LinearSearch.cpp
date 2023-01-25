#include "LinearSearch.h"

namespace Algorithms
{
    int LinearSearch::sortedLinearSearch(int value, std::vector<int> & input) {
        int inputLength = input.size();
        for (int i = 0; i < inputLength; i++) {
            int x = input.at(i);
            if (x == value) return i;
            if (x > value) return -1;
        }
    }

    int LinearSearch::unsortedLinearSearch(int value, std::vector<int> & input) {
        int inputLength = input.size();
        for (int i = 0; i < inputLength; i++) {
            if (input.at(i) == value) return i;
        }
        return -1;
    }
}
