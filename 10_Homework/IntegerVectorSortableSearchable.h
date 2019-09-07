/* 
 * File:   IntegerVectorSortableSearchable.h
 * Author: Ben
 *
 * Created on February 17, 2019, 7:12 PM
 */

#ifndef INTEGERVECTORSORTABLESEARCHABLE_H
#define INTEGERVECTORSORTABLESEARCHABLE_H

#include "IntegerVectorSortable.h"
#include "IntegerVectorSearchable.h"

class IntegerVectorSortableSearchable: public IntegerVectorSortable, public IntegerVectorSearchable {
public:
    IntegerVectorSortableSearchable(): IntegerVectorSearchable(), IntegerVectorSortable(){}
    void print() const {IntegerVectorSortable::print();}
     
};

#endif /* INTEGERVECTORSORTABLESEARCHABLE_H */

