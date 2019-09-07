/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MedCharacter.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:48 PM
 */

#include <exception>
#include <string>
using namespace std;

#ifndef __MedCharacter_h__
#define __MedCharacter_h__

#include "Character.h"

class MedCharacter : public Character {
private: 
    string _m_weapon;
public:
    MedCharacter(string line);;
    virtual void print() const;
    string getWeapon() const {return this->_m_weapon;};
};

#endif

