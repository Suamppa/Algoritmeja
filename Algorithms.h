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
        int start, end;
        /**
         * The total number of elements in the heap.
         */
        int length;
        /**
         * The number of elements currently in the heap. Note that inHeap <= length.
         */
        int inHeap;
    public:
        /**
         * @brief   Construct a new Heap object.
         * 
         * @param   container holds the data to heapify
         * @param   first starting index for heap assignment
         * @param   last last index to use in heap
         */
        Heap(Container & container, int first, int last);
        /**
         * @brief   Get the number of elements in the heap.
         * 
         * @returns int, heap size
         */
        int size();
        /**
         * @brief   Get the parent node of the given index.
         * 
         * @param   i index whose parent to fetch
         * @returns int, index of the parent
         */
        int parent(int i);
        /**
         * @brief   Get the left child node of the given index.
         * 
         * @param   i index whose left child to fetch
         * @return  int, index of the left child
         */
        int left(int i);
        /**
         * @brief   Get the right child node of the given index.
         * 
         * @param   i index whose right child to fetch
         * @return  int, index of the right child
         */
        int right(int i);
        /**
         * @brief   Checks if an index is in the heap structure.
         * 
         * @param   i index to check
         * @returns true if index is in heap
         * @returns false is index is outside of heap
         */
        bool isInHeap(int i);
        /**
         * @brief   Arrange the heap structure into a max heap.
         *          In a max heap, a node's parent's value is always at least equal to the child's value.
         */
        void buildMaxHeap();
        /**
         * @brief   Fix the max heap property at index i. Checking is done downward (child nodes).
         * 
         * @param   i index to start checking downwards from
         */
        void fixMaxHeap(int i);
        /**
         * @brief   Get the underlying Container object by reference.
         * 
         * @returns Container&, the underlying container
         */
        Container & getContainer();
        /**
         * @brief   Get the number of elements currently in heap.
         *          Note that inHeapCount() <= size().
         *          This is for utility, not for length measurement.
         * 
         * @returns int, the number of elements in heap
         */
        int inHeapCount();
        /**
         * @brief   Set the number of elements currently in heap.
         *          [This is just a quick solution for now.]
         * 
         * @param   num the value to set to
         */
        void setInHeapCount(int num);
        /**
         * @brief   Get the first index of the heap structure.
         * 
         * @returns int, the starting index
         */
        int getStart();
        /**
         * @brief   Get the last index of the heap structure.
         * 
         * @returns int, the last index
         */
        int getEnd();
        /**
         * @brief   Get element at index i.
         * 
         * @param   i index
         * @returns auto&, element at index i
         */
        auto & operator[](int i);
    };

    inline namespace Helper {
        template<class Container>
        int partition(Container & container, int start, int end);
    }
}

#endif // !ALGORITHMS_H
