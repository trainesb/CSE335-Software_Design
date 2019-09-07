/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CharacterFactory.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:37 PM
 */

#include <exception>
#include <string>
using namespace std;

#include "Character.h"

#ifndef __CharacterFactory_h__
#define __CharacterFactory_h__

class CharacterFactory {
public: 
    virtual Character* createCharacter(string line) = 0;
};

#endif

