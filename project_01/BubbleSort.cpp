/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
using namespace std;

#include "BubbleSort.h"

void BubbleSort::sort(SortableVector* sv) {
    bool sorted = false;
    int n = sv->getSize();
    while(!sorted){
        sorted = true;
        for(int i=1; i<n; i++){
            if(needSwap(sv, i-1, i)){
                sv->swap(i-1, i);
                sorted = false;
            }
        }
        n--;
    }
}
