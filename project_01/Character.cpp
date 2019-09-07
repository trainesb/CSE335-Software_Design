/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#include "Character.h"
#include "Game.h"
#include "SmallCharacter.h"
#include "MedCharacter.h"
#include "LargeCharacter.h"

Character::Character(string s) {
    istringstream iss(s);
    
    iss >> this->_m_name;
    iss >> this->_m_size;
    iss >> this->_m_weight;
    iss >> this->_m_speed;
    iss >> this->_m_hairLength;
    iss >> this->_m_race;
}

void Character::print() const {
    printf("Name: %s\t", this->getName().c_str());
    printf("Size: %s\t", this->getSize().c_str());
    printf("Weight: %4.1f\t", this->getWeight());
    printf("Speed: %d\t", this->getSpeed());
    printf("HairLen: %3.1f\t", this->getHairLength());
    printf("Race: %s\t", this->getRace().c_str());
}