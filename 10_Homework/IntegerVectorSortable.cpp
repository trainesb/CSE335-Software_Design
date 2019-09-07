/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "IntegerVectorSortable.h"
#include "SortableVector.h"
using namespace std;

bool IntegerVectorSortable::smaller(int i, int j) const{
    if(m_IntegerVector[i] < m_IntegerVector[j])
        return true;
    else
        return false;
}
    
void IntegerVectorSortable::swap(int i, int j){ 
    int temp = m_IntegerVector[i];
    m_IntegerVector[i]=m_IntegerVector[j];
    m_IntegerVector[j]=temp;
}
    
void IntegerVectorSortable::print() const{
    for(int i=0; i<getSize(); i++)
        cout<<m_IntegerVector[i]<<"; ";
    cout<<endl;
}  