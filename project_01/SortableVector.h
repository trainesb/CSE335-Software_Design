/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sortableVector.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:32 PM
 */

#include <exception>
using namespace std;

#ifndef __SortableVector_h__
#define __SortableVector_h__

class SortableVector {
public: 
    virtual unsigned int getSize() const = 0;
    virtual void swap(int i, int j) = 0;
    virtual bool raceSmaller(int i, int j) const = 0;
    virtual bool speedSmaller(int i, int j) const = 0;
    virtual bool hairSmaller(int i, int j) const = 0;
    virtual bool nameSmaller(int i, int j) const = 0;
};

#endif

