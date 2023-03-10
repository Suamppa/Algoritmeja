#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "Algorithms.h"

namespace Algorithms
{
    /**
     * @brief   Find the index of the requested value in a sorted container input.
     *          Sorting to be added after getting to sorting algorithms.
     * 
     * @tparam  T the type of data stored in the container (or convertible)
     * @tparam  Container the container type, must provide functions `size()` and `at()`
     * @param   value the value to search for
     * @param   input the container to be searched
     * @pre     input content is of a comparable type convertible to T and sorted in a non-decreasing order
     *          && container class provides functions `size()` and `at()`
     * @post    return is of type int signifying the index of value or -1 if not found
     *          && input is unchanged
     * @returns int, index of value in input or -1 if not found
     */
    template<typename T, class Container>
    static int sortedLinearSearch(T value, Container & input);

    /**
     * @brief   Find the index of the requested value within a sorted container.
     *          Sorting to be added after getting to sorting algorithms.
     * 
     * @tparam  T the type of data stored in the container (or convertible)
     * @tparam  InputIterator input iterator type
     * @param   value the value to search for
     * @param   first iterator pointing to where the search starts
     * @param   last iterator pointing to where the search ends
     * @pre     input content is of a comparable type convertible to T and sorted in a non-decreasing order
     * @post    return is of type int signifying the index of value or -1 if not found
     *          && input is unchanged
     * @returns int, index of value in the container or -1 if not found
     */
    template<typename T, typename InputIterator>
    static int sortedLinearSearch(T value, InputIterator first, InputIterator last);

    /**
     * @brief   Find the index of the requested value in an unsorted container input.
     * 
     * @tparam  T the type of data stored in the container (or convertible)
     * @tparam  Container the container type, must provide functions `size()` and `at()`
     * @param   value the value to search for
     * @param   input the container to be searched
     * @pre     input content is of a comparable type convertible to T
     *          && container class provides functions `size()` and `at()`
     * @post    return is of type int signifying the index of value or -1 if not found
     *          && input is unchanged
     * @returns int, index of value in input or -1 if not found
     */
    template<typename T, class Container>
    static int unsortedLinearSearch(T value, Container & input);

    /**
     * @brief   Find the index of the requested value in an unsorted container input.
     * 
     * @tparam  T the type of data stored in the container (or convertible)
     * @tparam  InputIterator input iterator type
     * @param   value the value to search for
     * @param   first iterator pointing to where the search starts
     * @param   last iterator pointing to where the search ends
     * @pre     first and last are not null
     * @post    return is of type int signifying the index of value or -1 if not found
     *          && input is unchanged
     * @returns int, index of value in input or -1 if not found
     */
    template<typename T, typename InputIterator>
    static int unsortedLinearSearch(T value, InputIterator first, InputIterator last);
}

#endif // !LINEARSEARCH_H
