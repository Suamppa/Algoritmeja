#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Algorithms.h"
#include <vector>

namespace Algorithms
{
    template<typename T>
    class HashTable
    {
        class Key
        {
            T value;
            Key * link;
            bool deleted;
        public:
            Key();
            Key(T data);
            T & value();
            Key & link();
            bool isDeleted();
            void erase();
        };
    };
}

#endif // !HASHTABLE_H
