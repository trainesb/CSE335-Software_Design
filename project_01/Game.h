/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:45 PM
 */

#include <exception>
#include <vector>

#ifndef __Game_h__
#define __Game_h__

#include "Character.h"
#include "CharacterVectorSortable.h"
#include "SmallFactory.h"
#include "MedFactory.h"
#include "LargeFactory.h"

class Game {
private: 
    CharacterVectorSortable _m_Characters;
public:
    Game(char* filename);
    ~Game(){};
    void createSisters(char* filename);
    void getCharacters();
    void getCharactersByRace();
    void getCharactersBySpeed();
    void getCharactersByHair();
    virtual void print() const;
};

#endif

