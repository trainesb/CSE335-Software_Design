/* 
 * File:   BubbleSortTemplate.h
 * Author: Ben
 *
 * Created on February 18, 2019, 12:16 AM
 */

#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H

#include "SortableVector.h"

class BubbleSortTemplate {
    public:
        virtual void sort(SortableVector* sortableVector);
        virtual bool needSwap(SortableVector* sortableVector , int i, int j) = 0;
};

#endif /* BUBBLESORTTEMPLATE_H */

