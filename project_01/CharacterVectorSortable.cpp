/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "CharacterVectorSortable.h"

void CharacterVectorSortable::swap(int i, int j){ 
    Character* temp = _m_charVec[i];
    _m_charVec[i]=_m_charVec[j];
    _m_charVec[j]=temp;
}

bool CharacterVectorSortable::raceSmaller(int i, int j) const {
    return (this->getVector()[i]->getRace() > this->getVector()[j]->getRace());
}

bool CharacterVectorSortable::speedSmaller(int i, int j) const {
    return (this->getVector()[i]->getSpeed() > this->getVector()[j]->getSpeed());
}

bool CharacterVectorSortable::hairSmaller(int i, int j) const {
    return (this->getVector()[i]->getHairLength() > this->getVector()[j]->getHairLength());
}

bool CharacterVectorSortable::nameSmaller(int i, int j) const {
    return (this->getVector()[i]->getName() > this->getVector()[j]->getName());
}
