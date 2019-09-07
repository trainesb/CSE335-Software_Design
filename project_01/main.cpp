/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ryan
 *
 * Created on February 24, 2019, 3:17 PM
 */

#include <cstdlib>
#include "Game.h"

/*
 * 
 */
int main(int argc, char** argv) {   
    
    Game game = Game("sisters.txt");
    
    game.getCharacters();
    
    game.getCharactersByRace();
    
    game.getCharactersBySpeed();

    game.getCharactersByHair();
    
    game.getCharacters();
    
    return 0;
}
