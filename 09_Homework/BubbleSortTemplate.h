/* 
 * File:   BubbleSortTemplate.h
 * Author: Ben
 *
 * Created on February 13, 2019, 9:53 AM
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

