/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <exception>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

#include "Game.h"
#include "Character.h"
#include "CharacterFactory.h"
#include "SmallFactory.h"
#include "MedFactory.h"
#include "LargeFactory.h"
#include "CharacterVectorSortByRace.h"
#include "CharacterVectorSortBySpeed.h"
#include "CharacterVectorSortByHair.h"
#include "CharacterVectorSortByName.h"

Game::Game(char* filename) {
    this->createSisters(filename);
}

void Game::createSisters(char* filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string word;
            for (int i = 0; i < 2; i++) {
                iss >> word;
            }
            if (word == "big") {
                LargeFactory large;
                this->_m_Characters.addCharacter(large.createCharacter(line));
            }
            if (word == "med") {
                MedFactory med;
                this->_m_Characters.addCharacter(med.createCharacter(line));
            }
            if (word == "small") {
                SmallFactory small;
                this->_m_Characters.addCharacter(small.createCharacter(line));
            }
        }
    }
}

void Game::print() const {
    for (unsigned int i = 0; i < this->_m_Characters.getSize(); i++) {
        Character* ch = this->_m_Characters.getCharacter(i);
        ch->print();
    }
    printf("************ **************** ************\n\n");
}

void Game::getCharacters() {
    printf("************ Printing Sisters ************\n");
    CharacterVectorSortByName cvsbn;
    cvsbn.sort(&this->_m_Characters);
    this->print();
}

void Game::getCharactersByRace() {
    printf("************ Printing Sisters: Order by Race ************\n");
    CharacterVectorSortByRace cvsbr;
    cvsbr.sort(&this->_m_Characters);
    this->print();
}

void Game::getCharactersBySpeed() {
    printf("************ Printing Sisters: Order by Speed ************\n");
    CharacterVectorSortBySpeed cvsbs;
    cvsbs.sort(&this->_m_Characters);
    this->print();
}

void Game::getCharactersByHair() {
    printf("************ Printing Sisters: Order by Hair ************\n");
    CharacterVectorSortByHair cvsbh;
    cvsbh.sort(&this->_m_Characters);
    this->print();
}
