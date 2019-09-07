/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.h
 * Author: 
 *
 * Created on February 24, 2019, 3:35 PM
 */

#include <exception>
using namespace std;

#ifndef __BubbleSort_h__
#define __BubbleSort_h__

#include "SortableVector.h"

class BubbleSort {
public:
    void sort(SortableVector* sv);
    virtual bool needSwap(SortableVector* sv, int i, int j) const = 0;
};

#endif

