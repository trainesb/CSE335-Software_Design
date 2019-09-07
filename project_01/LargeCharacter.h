/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LargeCharacter.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:46 PM
 */

#include <exception>
#include <string>
using namespace std;

#ifndef __LargeCharacter_h__
#define __LargeCharacter_h__

#include "Character.h"

class LargeCharacter : public Character {
private: 
    string _m_skill;
public:
    LargeCharacter(string line);
    virtual void print() const;
    string getSkill() const {return this->_m_skill;};
};

#endif

