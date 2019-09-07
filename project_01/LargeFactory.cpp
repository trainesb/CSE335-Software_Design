/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "LargeFactory.h"

Character* LargeFactory::createCharacter(string line) {
    return new LargeCharacter(line);
}