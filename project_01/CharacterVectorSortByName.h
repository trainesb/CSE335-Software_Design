/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CharacterVectorSortByName.h
 * Author: Ryan
 *
 * Created on February 25, 2019, 12:31 PM
 */

#include <exception>
using namespace std;

#ifndef CHARACTERVECTORSORTBYNAME_H
#define CHARACTERVECTORSORTBYNAME_H

#include "CharacterVectorSortable.h"
#include "SortableVector.h"
#include "BubbleSort.h"

class CharacterVectorSortByName : public BubbleSort {
public: 
    virtual bool needSwap(SortableVector* sv, int i, int j) const;
};

#endif

