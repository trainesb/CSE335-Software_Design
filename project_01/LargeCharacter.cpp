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

#include "LargeCharacter.h"
#include "Character.h"

LargeCharacter::LargeCharacter(string line) : Character(line) {
    istringstream iss(line);
    string word;
    vector<string> options;
    while (iss >> word) {
        options.push_back(word);
    }
    
    this->_m_skill = options[6];
}

void LargeCharacter::print() const {
    Character::print();
    printf("Skill: %s\n", this->_m_skill.c_str());
}
