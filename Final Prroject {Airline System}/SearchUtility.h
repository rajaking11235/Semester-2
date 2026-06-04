#ifndef SEARCHUTILITY_H
#define SEARCHUTILITY_H

#include <vector>

template<typename T>
T* findItem(std::vector<T*>& items,
            int index)
{
    if(index >= 0 &&
       index < items.size())
    {
        return items[index];
    }

    return nullptr;
}

#endif
