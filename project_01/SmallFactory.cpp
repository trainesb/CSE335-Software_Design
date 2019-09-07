/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
#include <string>
using namespace std;

#include "SmallFactory.h"
#include "SmallCharacter.h"
#include "Character.h"
#include "CharacterFactory.h"

Character* SmallFactory::createCharacter(string line) {
    return new SmallCharacter(line);
}