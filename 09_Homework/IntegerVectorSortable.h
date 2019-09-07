/* 
 * File:   IntegerVectorSortable.h
 * Author: Ben
 *
 * Created on February 13, 2019, 9:55 AM
 */

#ifndef INTEGERVECTORSORTABLE_H
#define INTEGERVECTORSORTABLE_H

#include <vector>
#include "SortableVector.h"

using namespace std;

class IntegerVectorSortable: public SortableVector {
protected:
    vector<int> m_IntegerVector;
public:    
    virtual unsigned int getSize() const {return m_IntegerVector.size();}
    virtual bool smaller(int i, int j) const;
    virtual void swap(int i, int j);
    virtual void print() const;
    int getInteger(int i) const {return m_IntegerVector[i];}
    int insertInteger(int element) {m_IntegerVector.push_back(element);}  
};


#endif /* INTEGERVECTORSORTABLE_H */

