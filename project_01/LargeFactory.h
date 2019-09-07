/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LargeFactory.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:47 PM
 */

#include <exception>
#include <string>
using namespace std;

#ifndef __LargeFactory_h__
#define __LargeFactory_h__

#include "Character.h"
#include "CharacterFactory.h"
#include "LargeCharacter.h"

class LargeFactory : public CharacterFactory {
public:
    Character* createCharacter(string line);
    ~LargeFactory(){};
};

#endif

