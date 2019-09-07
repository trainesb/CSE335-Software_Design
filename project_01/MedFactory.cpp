/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
#include <string>
using namespace std;

#include "MedFactory.h"
#include "Character.h"
#include "CharacterFactory.h"
#include "MedCharacter.h"

Character* MedFactory::createCharacter(string line) {
    return new MedCharacter(line);
}
