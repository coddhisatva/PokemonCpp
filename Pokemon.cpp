
#include <string>
#include "Pokemon.h"
#include "Move.h"
#include <iostream>
#include <cmath>
#include <iostream>
using std::string;

Pokemon::Pokemon(size_t id, unsigned int level)
: id_(id), level_(level), species_(PokemonDb[id])
{
    bool isNickname = false;
    if (!isNickname) {
        nickname_ = species_.getName();
    } // TODO: nickname
    
    //TODO: Set Moves based on Level
    size_t moveIdx = 0;
    for (auto pair : levelUpMoves[id_]) {
        if (pair.first > level_) {
            break;
        }
        moveIdxs_[moveIdx] = pair.second;
        moveIdx++;
        if (numMoves_ < 4) {
            numMoves_++;
        }
        while (moveIdx >= 4) {
            moveIdx -=4;
        }
    }
    
    //TODO: stats dynamic w/ level, maybe evs, not just species:
    currHp_ = maxHp_ = species_.getHp();
    spAttack_ = species_.getSpAttack();
    spDefense_ = species_.getSpDefense();
    speed_ = species_.getSpeed();
};

PokemonSpecies Pokemon::getSpecies() {
    return species_;
}



string Pokemon::getNickname() {
    return nickname_;
}

unsigned int Pokemon::getMaxHp() {
    return maxHp_;
}

unsigned int Pokemon::getCurrHp() {
    return currHp_;
}

unsigned int Pokemon::getSpAttack() {
    return spAttack_;
}

unsigned int Pokemon::getSpDefense() {
    return spDefense_;
}

unsigned int Pokemon::getSpeed() {
    return speed_;
}

unsigned int Pokemon::getNumMoves() {
    return numMoves_;
}

void Pokemon::printMoves() {
    for (int i = 0; i < numMoves_; i++) {
        std::cout << MoveDb[moveIdxs_[i]] << " (" << i << ")'\n'";
    }
}

//returns enemy hp remaining
unsigned int Pokemon::useMove(size_t moveIdx, Pokemon &enemy) {
    std::cout << nickname_ << " used ";
    Move move = MoveDb[moveIdxs_[moveIdx]];
    std::cout << move.getName() << "!'\n'";
    unsigned int totalPower = move.getPower() * spAttack_;
    return enemy.takeDamage(totalPower);
}

unsigned int Pokemon::takeDamage(unsigned int totalPower) {
    unsigned int hpToLose = (totalPower / spDefense_) / 12;
    
    hpToLose = std::min(hpToLose, currHp_);
    currHp_ -= hpToLose;
    std::cout << nickname_ << " took " << hpToLose << " damage!'\n'";
    if (currHp_ <= 0) {
        currHp_ = 0;
        //should never happen
    }
    return currHp_;
}


