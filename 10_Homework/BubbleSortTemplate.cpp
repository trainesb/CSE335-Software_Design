/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "BubbleSortTemplate.h"

void BubbleSortTemplate::sort(SortableVector* sortableVector){
        bool sorted = false;
        int n = sortableVector->getSize();
        while(!sorted){
            sorted = true;
            for(int i=1; i<n; i++){
                if(needSwap(sortableVector, i-1, i)){
                    sortableVector->swap(i-1, i);
                    sorted = false;
                }
            }
            n--;
        }
}