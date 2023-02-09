/** Utilities for the Algorithms namespace */

#ifndef ALGORITHMS_H
#define ALGORITHMS_H

/**
 * Shared namespace for all the included algorithms
 */
namespace Algorithms {
    /**
     * @brief   Swaps the container's contents between the given indices.
     * 
     * @tparam  Container the container type, must provide the function `at()`
     * @param   container container to access, will be modified directly
     * @param   index1 the index of the element to swap with
     * @param   index2 the index of the other element to swap with
     */
    template<class Container>
    void swap(Container & container, int index1, int index2);

    /**
     * @brief   Class to assign a container's index range to a heap structure.
     * 
     * @tparam  Container container type
     */
    template<class Container>
    class Heap
    {
        Container & container;
        int start, end, length, inHeap;
    public:
        Heap(Container & container, int first, int last);
        int size();
        int parent(int i);
        int left(int i);
        int right(int i);
        bool isInHeap(int i);
        void buildMaxHeap();
        void fixMaxHeap(int i);
        Container & getContainer();

        auto & operator[](int i);
    };

    /*
    template<class Container>
    void buildMaxHeap(Container & container);

    template<class Container>
    void fixMaxHeap(Container & container);
     */
}

#endif // !ALGORITHMS_H
