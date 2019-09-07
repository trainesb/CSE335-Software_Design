/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
using namespace std;

#include "CharacterVectorSortBySpeed.h"
#include "CharacterVectorSortable.h"

bool CharacterVectorSortBySpeed::needSwap(SortableVector* sv, int i, int j) const {
    return sv->speedSmaller(i, j);
}
