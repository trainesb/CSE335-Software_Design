/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CharacterVectorSortByRace.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:43 PM
 */

#include <exception>
using namespace std;

#ifndef __CharacterVectorSortByRace_h__
#define __CharacterVectorSortByRace_h__

#include "CharacterVectorSortable.h"
#include "SortableVector.h"
#include "BubbleSort.h"

class CharacterVectorSortByRace : public BubbleSort {
public: 
    virtual bool needSwap(SortableVector* sv, int i, int j) const;
};

#endif

