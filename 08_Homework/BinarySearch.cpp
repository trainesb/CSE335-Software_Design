/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "BinarySearch.h"

int BinarySearch::search(SearchableVector* searchableVector) {
    int begin = 0;
    int end = searchableVector->getSize();
    
    while(begin <= end) {
        int middle = (begin + end)/2;
        int cmpr = searchableVector->compareAt(middle);
        
        if( cmpr == 0) {return middle;}
        else if (cmpr == 1) {end = middle - 1;}
        else {begin = middle + 1;}
    }
    return -1;
}
