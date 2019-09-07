/* 
 * File:   BubbleSortDecreasing.h
 * Author: Ben
 *
 * Created on February 13, 2019, 9:49 AM
 */

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include "BubbleSortTemplate.h"


class BubbleSortDecreasing: public BubbleSortTemplate {
public:
    bool needSwap(SortableVector* sortableVector, int i, int j){return sortableVector->smaller(i,j);}
};

#endif /* BUBBLESORTDECREASING_H */

