/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CharacterVectorSortable.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:40 PM
 */

#include <exception>
#include <vector>
using namespace std;

#ifndef __CharacterVectorSortable_h__
#define __CharacterVectorSortable_h__

#include "Character.h"
#include "SortableVector.h"

class CharacterVectorSortable: public SortableVector {
private:
    vector<Character*> _m_charVec;
public: 
    vector<Character*> getVector() const {return this->_m_charVec;};
    virtual unsigned int getSize() const {return this->_m_charVec.size();};
    void addCharacter(Character* ch) {this->_m_charVec.push_back(ch);};
    Character* getCharacter(int i) const {return this->_m_charVec[i];};
    virtual void swap(int i, int j);
    virtual bool raceSmaller(int i, int j) const;
    virtual bool speedSmaller(int i, int j) const;
    virtual bool hairSmaller(int i, int j) const;
    virtual bool nameSmaller(int i, int j) const;
};

#endif

