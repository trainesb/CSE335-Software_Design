/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   smallCharacter.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:29 PM
 */

#include <exception>
#include <string>
using namespace std;

#ifndef __SmallCharacter_h__
#define __SmallCharacter_h__

#include "Character.h"

class SmallCharacter : public Character {
private: 
    bool _m_isEquipped;
public:
    SmallCharacter(string line);
    virtual void print() const;
    bool isEquipped() const {return this->_m_isEquipped;};
};

#endif

