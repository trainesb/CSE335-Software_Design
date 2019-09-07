/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
using namespace std;

#include "CharacterVectorSortByName.h"
#include "CharacterVectorSortable.h"

bool CharacterVectorSortByName::needSwap(SortableVector* sv, int i, int j) const {
    return sv->nameSmaller(i, j);
}