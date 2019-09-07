/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MedFactory.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:28 PM
 */

#include <exception>
#include <string>
using namespace std;

#ifndef __MedFactory_h__
#define __MedFactory_h__

#include "Character.h"
#include "CharacterFactory.h"
#include "MedCharacter.h"

class MedFactory: public CharacterFactory
{
public:
    Character* createCharacter(string line);
    ~MedFactory(){};
};

#endif
