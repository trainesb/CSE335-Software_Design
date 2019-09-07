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
#include "SmallCharacter.h"

SmallCharacter::SmallCharacter(string line) : Character(line) {
    istringstream iss(line);
    string word;
    vector<string> options;
    while (iss >> word) {
        options.push_back(word);
    }
    
    if (options[6] == "TRUE") {
        this->_m_isEquipped = true;
    }
    this->_m_isEquipped = false;
}

void SmallCharacter::print() const {
    Character::print();
    printf("IsEquipped: %d\n", this->isEquipped());
}