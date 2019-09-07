/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on February 13, 2019, 9:47 AM
 */

#include <cstdlib>
#include <iostream>
#include "BubbleSortTemplate.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"
#include "SortableVector.h"
#include "IntegerVectorSortable.h"
#include "SearchableVector.h"
#include "BinarySearch.h"
#include "IntegerVectorSearchable.h"
#include "IntegerVectorSortableSearchable.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    IntegerVectorSortableSearchable ivss;
    ivss.setQuery(0);
    ivss.insertInteger(9);
    ivss.insertInteger(3);
    ivss.insertInteger(7);
    ivss.insertInteger(5);
    ivss.insertInteger(8);
    ivss.insertInteger(1);
    ivss.insertInteger(4);
    ivss.insertInteger(2);
    ivss.insertInteger(3);
    
    BubbleSortIncreasing bsi;
    bsi.sort(&ivss);
    
    BinarySearch bs;
    cout << "All integers are: " << endl;
    ivss.print();
    int query = 1;
    while(query!=0){
        cout << "Please input the number that you want to search: ";
        cin >> query;
        ivss.setQuery(query);
        int searchResult = bs.search(&ivss);
        cout << endl;
        if(searchResult==-1){
            cout << "There is no match!" << endl;
        }
        else{
            cout << "Find match at the " << searchResult << "th element!" << endl;
        }
    }

    return 0;
}

