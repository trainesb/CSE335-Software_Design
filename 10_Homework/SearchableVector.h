/* 
 * File:   SearchableVector.h
 * Author: Ben
 *
 * Created on February 17, 2019, 10:36 PM
 */

#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

class SearchableVector {
public:
    virtual unsigned int getSize() const = 0;
    virtual int compareAt(int i) = 0;
};

#endif /* SEARCHABLEVECTOR_H */

