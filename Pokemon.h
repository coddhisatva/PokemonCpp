#pragma once
#include <string>
#include <vector>
#include "Move.h"
#include "Type.h"
#include "PokemonSpecies.h"

class Pokemon {
public:
    Pokemon(size_t id, unsigned int level=5);
    
    PokemonSpecies getSpecies();
    string getNickname();
    unsigned int getMaxHp();
    unsigned int getCurrHp();
    unsigned int getSpAttack();
    unsigned int getSpDefense();
    unsigned int getSpeed();
    unsigned int getNumMoves();
    void printMoves();
    unsigned int useMove(size_t moveIdx, Pokemon& enemy);
    unsigned int takeDamage(unsigned int totalPower);

private:
    unsigned int level_;
    size_t id_;
    PokemonSpecies species_;
    string nickname_;
    unsigned int maxHp_;
    unsigned int currHp_;
    unsigned int spAttack_;
    unsigned int spDefense_;
    unsigned int speed_;
    size_t moveIdxs_[4];
    unsigned int numMoves_ = 0;
};


