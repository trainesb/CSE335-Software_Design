/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on February 13, 2019, 9:47 AM
 */

#include <cstdlib>
#include <iostream>

#include "BubbleSortTemplate.h"
#include "SortableVector.h"
#include "IntegerVectorSortable.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    IntegerVectorSortable ivs;
    ivs.insertInteger(5);
    ivs.insertInteger(4);
    ivs.insertInteger(6);
    ivs.insertInteger(10);
    
    cout<<"***************** Before Sorting Integers Decreasing"<<endl;
    ivs.print();
    
    cout<<"***************** After Sorting Integers Decreasing"<<endl;
    BubbleSortDecreasing bsd;
    bsd.sort(&ivs);
    ivs.print();

    cout<<"***************** After Sorting Integers Increasing"<<endl;
    BubbleSortIncreasing bsi;
    bsi.sort(&ivs);
    ivs.print();

    return 0;
}

