/* 
 * File:   main.cpp
 * 
 * Abstract:
 *   This software takes in integers into a vector and is able to return the
 *   index location of a value, or provide information that the value isn't in 
 *   the vector. Uses the Abstract Factory Pattern to sort vector.
 * 
 * Documents:
 *   
 * 
 * Author: Ben Traines
 *
 * Created on February 9, 2019, 5:14 PM
 */

#include <cstdlib>
#include <iostream>
#include <istream>

#include "BinarySearch.h"
#include "SearchableVector.h"
#include "IntegerVectorSearchable.h"
using namespace std;

int main(int argc, char** argv) {
    IntegerVectorSearchable ivs;
    ivs.insertinteger(1);
    ivs.insertinteger(2);
    ivs.insertinteger(3);
    ivs.insertinteger(4);
    ivs.insertinteger(5);
    ivs.insertinteger(6);
    ivs.insertinteger(7);
    ivs.insertinteger(8);
    ivs.insertinteger(9);
    
    BinarySearch bs;
    
    cout<<"All integers are: "<<endl;
    ivs.print();
    int query = 1;
    while(query!=0){
        cout<<"Please input the number that you want to search: ";
        cin>>query;
        ivs.setQuery(query);
        int searchResult=bs.search(&ivs);
        cout<<endl;
        if(searchResult==-1)cout<<"There is no match!"<<endl;
        else cout<<"Find match at the "<<searchResult<<"th element!"<<endl;
    }
    return 0;
}

