/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   smallFactory.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:31 PM
 */

#include <exception>
#include <string>
using namespace std;

#ifndef __SmallFactory_h__
#define __SmallFactory_h__

#include "Character.h"
#include "CharacterFactory.h"
#include "SmallCharacter.h"

class SmallFactory : public CharacterFactory {
public: 
    Character* createCharacter(string line);
    ~SmallFactory(){};
};

#endif

