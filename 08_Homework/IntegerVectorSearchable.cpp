/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <vector>
#include "IntegerVectorSearchable.h"

using namespace std;

int IntegerVectorSearchable::compareAt(int i) {
    if(m_IntegerVector[i] == m_Querry) {return 0;}
    else if(m_IntegerVector[i] > m_Querry) {return 1;}
    else {return -1;}
}

void IntegerVectorSearchable::print() const{
    for(int i=0; i<m_IntegerVector.size(); ++i){
        cout<<m_IntegerVector[i]<<"; ";
    }
    cout<<endl;
}