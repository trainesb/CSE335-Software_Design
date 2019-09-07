/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#include "MedCharacter.h"
#include "Character.h"

MedCharacter::MedCharacter(string line) : Character(line) {
    istringstream iss(line);
    string word;
    vector<string> options;
    while (iss >> word) {
        options.push_back(word);
    }
    
    this->_m_weapon = options[6];
}

void MedCharacter::print() const {
    Character::print();
    printf("Weapon: %s\n", this->_m_weapon.c_str());
}
