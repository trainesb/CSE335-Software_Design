/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
using namespace std;

#include "CharacterVectorSortByRace.h"
#include "CharacterVectorSortable.h"

bool CharacterVectorSortByRace::needSwap(SortableVector* sv, int i, int j) const {
    return sv->raceSmaller(i, j);
}
