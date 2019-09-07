/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CharacterVectorSortByHair.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:42 PM
 */

#include <exception>
using namespace std;

#ifndef __CharacterVectorSortByHair_h__
#define __CharacterVectorSortByHair_h__

#include "CharacterVectorSortable.h"
#include "SortableVector.h"
#include "BubbleSort.h"

class CharacterVectorSortByHair : public BubbleSort {
public: 
    virtual bool needSwap(SortableVector* sv, int i, int j) const;
};

#endif

