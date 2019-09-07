/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Character.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:36 PM
 */

#include <exception>
#include <string>
using namespace std;

#ifndef __Character_h__
#define __Character_h__

// #include "Game.h"
//#include "SmallCharacter.h"
//#include "MedCharacter.h"
//#include "LargeCharacter.h"

class Character {
protected:
    string _m_name;
    string _m_size;
    double _m_weight;
    int _m_speed;
    double _m_hairLength;
    string _m_race;
    string _m_other;    
public:
    Character(string s);
    string getName() const {return this->_m_name;};
    string getSize() const {return this->_m_size;};
    double getWeight() const {return this->_m_weight;};
    int getSpeed() const {return this->_m_speed;};
    double getHairLength() const {return this->_m_hairLength;};
    string getRace() const {return this->_m_race;};
    virtual void print() const;
};

#endif

