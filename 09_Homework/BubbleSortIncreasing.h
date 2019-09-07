/* 
 * File:   BubbleSortIncreasing.h
 * Author: Ben
 *
 * Created on February 13, 2019, 9:51 AM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include "BubbleSortTemplate.h"

class BubbleSortIncreasing: public BubbleSortTemplate {
public:
    bool needSwap(SortableVector* sortableVector, int i, int j){return !sortableVector->smaller(i,j);}
};

#endif /* BUBBLESORTINCREASING_H */

