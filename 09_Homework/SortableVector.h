/* 
 * File:   SortableVector.h
 * Author: Ben
 *
 * Created on February 13, 2019, 9:57 AM
 */

#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

class SortableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual void swap(int i, int j) = 0;
};

#endif /* SORTABLEVECTOR_H */

