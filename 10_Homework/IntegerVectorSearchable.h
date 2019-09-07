/* 
 * File:   IntegerVectorSearchable.h
 * Author: Ben
 *
 * Created on February 17, 2019, 10:35 PM
 */

#ifndef INTEGERVECTORSEARCHABLE_H
#define INTEGERVECTORSEARCHABLE_H

#include <vector>
#include "SearchableVector.h"
using namespace std;

class IntegerVectorSearchable: public SearchableVector {
protected:
    vector<int> m_IntegerVector;
    int m_Querry;
public:
    virtual unsigned int getSize() const {return m_IntegerVector.size();}
    virtual int compareAt(int i);
    void setQuery(int i) {m_Querry = i;}
    int insertinteger(int i) {m_IntegerVector.push_back(i);}
    virtual void print() const;
};

#endif /* INTEGERVECTORSEARCHABLE_H */

